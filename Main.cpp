#include <iostream>
#include "Course.h"

using std::cout, std::endl, std::string;

int main() {
    Student s1;
    Student s2("Dave", "Churchill", 1, 3.14);
    Student s3("Bruce", "Lee", 7359, 3.99);

    Course c("COMP3400");
    c.addStudent(s1);
    c.addStudent(s2);
    c.addStudent(s3);

    c.loadFromFile("students.txt");
    c.printStudents();

//    for (const Student& s : c.getStudents()) {
//        s.print();
//    }

    return 0;
}