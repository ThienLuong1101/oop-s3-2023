#include"Course.h"
#include"Gradebook.h"
#include <iostream>

using namespace std;

class University {

private: 
    string name;
    string location;
    Course* courses;
    Gradebook* book;
    int len;
    int curr = 0;
public:
    University();
    University(string _name, string _location);
    void set_name_uni(string _name);
    string get_name_uni();
    void set_location(string _name);
    string get_location();
    void Uni_Course(int len);
    void addCourse(int id, string name);
    void printCourse();
    // ~University();
};