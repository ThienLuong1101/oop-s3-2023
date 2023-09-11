#include"Gradebook.h"


    Gradebook::Gradebook() {}
    Gradebook::Gradebook(int num) {
        total = num;
        grades = new Grade[total];
    }
    void Gradebook::addGrade(int stu_id, int course_id, string assignment, int value) {
        
        if (grades[curr].get_student_id() == 0)
        {
            grades[curr].set_student_id(stu_id);
            grades[curr].set_course_id(course_id);
            grades[curr].set_assignment(assignment);
            grades[curr].set_value(value);
            curr++;
        }
        
    }
    void Gradebook::printBook() {
    for (int i = 0; i < curr; i++) {
        cout << "Student ID: " << grades[i].get_student_id() << endl;
        cout << "Course ID: " << grades[i].get_course_id() << endl;
        cout << "Assignment: " << grades[i].get_assignment() << endl;
        cout << "Grade: " << grades[i].get_value() << endl;
        cout << "-------------------------" << endl;
    }
}
    // Gradebook::~Gradebook() {delete [] grades;}
