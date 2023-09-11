#ifndef STUDENT_H
#define STUDENT_H
#include"Person.h"
#include<iostream>

using namespace std;


class Student : public Person
{
private:
    int id;
public:
    Student(string name);
    void set_id(int _id);
    int get_id();
};

#endif