#include "Course.h"
#include <fstream>

using std::cout, std::endl, std::string;

Course::Course() = default;

Course::Course(const string& name)
    : _name(name) {}

const vector<Student>& Course::getStudents() const {
    return _students;
}

void Course::addStudent(const Student& s) {
    _students.push_back(s);
}

void Course::loadFromFile(const string& filename) {
    std::ifstream inFile(filename);
    if (inFile.is_open()) {
        string first, last;
        int id;
        float avg;
        while (inFile >> first) {
            inFile >> last >> id >> avg;
            addStudent(Student(first, last, id, avg));
        }
        inFile.close();
    } else {
        perror("std::ifstream.is_open()");
        exit(1);
    }
}

void Course::printCourse() const {
    cout << _name << endl;
}

void Course::printStudents() const {
    for (const auto& s: _students) {
        s.print();
    }
}