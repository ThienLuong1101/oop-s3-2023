#include"Person.h"



Person::Person() {}
Person::Person(string name) : name(name) {}
void Person::set_name(string _name) {name = _name;}
string Person::get_name() {return name;}


