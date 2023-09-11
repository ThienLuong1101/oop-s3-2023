#include"Course.h"



Course::Course(/* args */) {};
Course::Course(int l) {
    len = l;
    persons = new Person*[len];
}
void Course::set_name_course(string _name) { name = _name;}
string Course::get_name_course() {return name;}
void Course::set_id_course(int _id) {id = _id;}
int Course::get_id_course() {return id;}
void Course::addPerson(Person* s) {
    for (int i = 0; i < len; i++)
    {
        if (persons[i] == nullptr)
        {   
            persons[i] = s;
            return;
        }
    }
    return;
}
// Course::~Course() {
//     for (int i = 0; i < len; i++)
//     {
//         delete persons[i];
//     }
//     delete [] persons;
// }
