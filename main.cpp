#include"Grade.h"
#include"Person.h"
#include"Student.h"
#include"Instructor.h"
#include"Course.h"
#include"Gradebook.h"
#include<iostream>

int main() {
    
    Student a("An");
    Instructor c("Musk");
    Person* list[2];
    list[0] = &a;
    list[1] = &c;
    cout<<list[0]->get_name()<<endl;
    cout<<list[1]->get_name()<<endl;
    static_cast<Student*>(list[0])->set_id(1101);
    Grade grade;
    // grade.set_student_id(1101);
    // cout<<grade.get_student_id() << endl;
    Course course(2);
    course.set_name_course("OOP");
    course.addPerson(list[0]);
    course.addPerson(list[1]);
    cout<<grade.get_student_id()<<endl;
    Gradebook book;
    book.addGrade(1101,1004,"OOP",95);
    book.printBook();
    
    // book.addGrade();
    // GOT.addCourse();
     
    return 0;
}