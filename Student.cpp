#include <iostream>
#include "Student.h"

using std::cout, std::endl;

Student::Student() = default;

Student::Student(const string& first,
                 const string& last,
                 int id,
                 float avg)
    : _first(first)
    , _last(last)
    , _id(id)
    , _avg(avg) {}

[[nodiscard]] int Student::getID() const {
    return _id;
}

[[nodiscard]] int Student::getAvg() const {
    return _avg;
}

[[nodiscard]] const string& Student::getFirst() const {
    return _first;
}

[[nodiscard]] const string& Student::getLast() const {
    return _last;
}

void Student::print() const {
    cout << _first << " " << _last << " ";
    cout << _id << " " << _avg << endl;
}