#include"University.h"

using namespace std;



University::University() {}
University::University(string _name, string _location) {
    name = _name;
    location = _location;
}
void University::Uni_Course(int len) {
    courses = new Course[len];
    this->len = len;
}
void University::set_name_uni(string _name) {name = _name;}
string University::get_name_uni() {return name;}
void University::set_location(string _location) {location = _location;}
string University::get_location() {return location;}
void University::addCourse(int id, string name) {
    if (curr < len)
    {
        courses[curr].set_id_course(id);
        courses[curr].set_name_course(name);
    }
    curr++;
}
University::~University() {
    delete [] courses;
}
