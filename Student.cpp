#include"Student.h"
#include<iostream>

using namespace std;



Student::Student(string name) : Person(name) {}
void Student::set_id(int _id) {id = _id;}
int Student::get_id() {return id;}
