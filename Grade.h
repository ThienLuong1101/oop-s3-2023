#ifndef GRADE_H
#define GRADE_H

#include"Course.h"
#include"Student.h"
#include<iostream>

using namespace std;

class Grade
{
private:
    string assignment;
    int value;
    int student_id;
    int course_id;
public:
    Grade();
    void set_course_id(int id);
    int get_course_id();
    void set_assignment(string _assignment);
    string get_assignment();
    void set_value(int _value);
    int get_value();
    void set_student_id(int _id);
    int get_student_id();
    Grade(string assignment, int value, int student_id, int course_id);
};

#endif
