#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include"Grade.h"
#include<iostream>

class Gradebook
{
    Grade* grades;
    int total;
    int curr = 0;
public:
    Gradebook();
    Gradebook(int num);
    void addGrade(int stu_id, int course_id, string assignment, int value);
    void printBook();
    // ~Gradebook();
};

#endif
