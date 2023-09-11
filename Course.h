#ifndef COURSE_H
#define COURSE_H
#include"Person.h"
#include<iostream>

using namespace std;

class Course
{
private:
    string name;
    int id;
    Person** persons;
    int len;
public:
    Course(/* args */);
    Course(int l);
    void set_name_course(string _name);
    string get_name_course();
    void set_id_course(int _id);
    int get_id_course();

    void addPerson(Person* s);
    // ~Course();
};

#endif