#include"Grade.h"
#include"Gradebook.h"
#include<iostream>
int main() {
    Grade grade;
    // grade.set_student_id(1101);
    // cout<<grade.get_student_id() << endl;
    
    cout<<grade.get_student_id()<<endl;
    Gradebook book(1);
    book.addGrade(1101,1004,"OOP",95);
    book.printBook();
    return 0;
}