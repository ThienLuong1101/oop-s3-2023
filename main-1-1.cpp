#include<iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include<string>
using namespace std;

class Vehicle {
    private:
        time_t timeOfEntry = time(nullptr);
        int ID;
    public:
    Vehicle(){};
    Vehicle( int id) : ID(id) {}
    time_t getTime() {return timeOfEntry;}
    int getID() {return ID;}
    virtual int getParkingDuration() = 0;
    ~Vehicle() {};
};

class Car : public Vehicle {
    public:
    Car(){};
    int getParkingDuration(){ 
        cout << "car: " ;
        time_t currTime = time(nullptr);
        int elapsedTime = static_cast<int>(currTime - getTime());
        std::this_thread::sleep_for(std::chrono::milliseconds(1000 - 900));
        return elapsedTime; 
    
    }
    
};

class Bus : public Vehicle {
    public:
    Bus() {};
    int getParkingDuration() {
        cout << "bus: " ;
        time_t currTime = time(nullptr);
        int elapsedTime = static_cast<int>(currTime - getTime());
        std::this_thread::sleep_for(std::chrono::milliseconds(1000 - 750));
        return elapsedTime; 
    }
};

class Motobike : public Vehicle {
    public:
    Motobike() {};
    int getParkingDuration() {
        cout << "motobike: " ;
        time_t currTime = time(nullptr);
        int elapsedTime = static_cast<int>(currTime - getTime());
        std::this_thread::sleep_for(std::chrono::milliseconds(1000 - 850));
        return elapsedTime; 
        
    }
};

class ParkingLot : public Vehicle{
    private:
        int max;
        int curr = 0;
    public:
        ParkingLot(int cap) : max(cap) {}
        Vehicle** park = new Vehicle*[max];
        int getCount() {return curr;}
        void parkVehiecle(Vehicle* a) {
            if (curr < max)
            {
                park[curr] = a;
                curr++;
            }
            else
            {
                cout << "The lot is full" << endl;
            }  
        } 
        void unparkVehiecle(int id) {
            int found = 0;
            for (int i = 0; i < max; i++)
            {
                if (park[i]->getID() == id)
                {
                    delete park[i];
                    found++;
                    park[i] = nullptr;
                }
            }
            if (!found)
            {
                cout<<"Vehicle not in the lot" << endl;
            }
            
            
        } 

};
int main() {
    int c, b, m;
    cout << "How many cars?: ";
    cin >> c;
    cout << "How many buses?: ";
    cin >> b;
    cout << "How many motobikes?: ";
    cin >> m;
    Vehicle** vehicles = new Vehicle*[c+b+m];
    for (int i = 0; i < c; i++)
    {
        vehicles[i] = new Car();
    }
    for (int i = 0; i < b; i++)
    {
        vehicles[i+c] = new Bus();
    }
    for (int i = 0; i < m; i++)
    {
        vehicles[i+c+b] = new Motobike();
    }

    while (true)
    {
        for (int i = 0; i < c+b+m; i++)
        {
            cout << vehicles[i]->getParkingDuration() << endl;
        }
    }










    for (int i = 0; i < c+b+m; i++)
    {
        delete vehicles[i];
    }
    delete [] vehicles;
    return 0;
}