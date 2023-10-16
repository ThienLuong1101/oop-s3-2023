#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// vector of int.
// used to store the records
typedef vector<int> Records;

// https://www.cplusplus.com/doc/tutorial/files/
class RecordsManager {
private:
    fstream _file;
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}
    void read(Records &records) {
        _file.open(_filename, ios::in);
        if (_file.is_open()) {
            string line;
            while (std::getline(_file, line)) {
                try {
                    records.push_back(stoi(line));
                } catch (const std::invalid_argument& e) {
                    cerr << "Wrong argument when reading the file: " << e.what() << endl;
                    _file.close();
                    throw e; // Propagate the exception one level up
                } catch (const std::out_of_range& e) {
                    cerr << "Out of range when reading the file: " << e.what() << endl;
                    _file.close();
                    throw e; // Propagate the exception one level up
                }
            }
            _file.close();
        } else {
            cerr << "Failed to open the file: " << _filename << endl;
        }
    }
};

int main() {
    try {
        RecordsManager recordMgr("test_clean-1.txt"); // Change the filename here for testing
        Records myRecords;

        // reads records
        recordMgr.read(myRecords);

        if (!myRecords.empty()) {
            // calculate and print out the sum
            int sum = 0;
            for (int i = 0; i < myRecords.size(); i++) {
                 sum += myRecords[i];
            }
            
            cout << sum << endl;
        }
    } catch (const std::exception& e) {
        cerr << "Exception caught in main: " << e.what() << endl;
    }

    return 0;
}
