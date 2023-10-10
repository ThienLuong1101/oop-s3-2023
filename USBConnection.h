// USBConnection.h

#ifndef USB_CONNECTION_H
#define USB_CONNECTION_H

#include <stack>

class USBConnection {
private:
    int ID;

    // Constructor is private to prevent direct object creation
    USBConnection(int id) : ID(id) {}

public:
    // Public static function to create new objects
    static USBConnection* CreateUsbConnection() {
        if (!ids.empty()) {
            int newID = ids.top();
            ids.pop();
            return new USBConnection(newID);
        }
        return nullptr; // No available ports
    }

    // Destructor to return a used ID to the stack
    ~USBConnection() {
        ids.push(ID);
    }
    int get_id() {
        return ID;
    }
private:
    static std::stack<int> ids; // Static stack to track available IDs
};

// Initialize the static stack with available IDs
std::stack<int> USBConnection::ids({3, 2, 1});

#endif // USB_CONNECTION_H
