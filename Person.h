#ifndef PERSON_H
#define PERSON_H

#include<iostream>
#include<string>
using namespace std;

class Person
{
    string name;
public:
    Person();
    Person(string name);
    void set_name(string _name);
    string get_name();
};


#endif