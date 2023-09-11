#include"Grade.h"
using namespace std;
Grade::Grade() {student_id = 0;}
void Grade::set_course_id(int id) {course_id = id;}
int Grade::get_course_id() {return course_id;}
void Grade::set_assignment(string _assignment) {assignment = _assignment;}
string Grade::get_assignment() {return assignment;}
void Grade::set_value(int _value) {value = _value;}
int Grade::get_value() {return value;}
void Grade::set_student_id(int _id) {student_id = _id;}
int Grade::get_student_id() {return student_id;}
Grade::Grade(string assignment, int value, int student_id, int course_id) {
    this->assignment = assignment;
    this->value = value;
    this->student_id = student_id;
    this->course_id = course_id;
}

