#ifndef LEARN_CPP_COURSE_H
#define LEARN_CPP_COURSE_H

#include <iostream>
#include <vector>
#include "Student.h"

using std::string, std::vector;

class Course {
    string _name = "Course";
    vector<Student> _students;
public:
    Course();
    Course(const string& name);
    [[nodiscard]] const vector<Student>& getStudents() const;
    void addStudent(const Student& s);
    void loadFromFile(const string& filename);
    void printCourse() const;
    void printStudents() const;
};

#endif //LEARN_CPP_COURSE_H
