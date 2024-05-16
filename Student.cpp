#include <iostream>
#include "Student.h"

using std::cout, std::endl;

Student::Student(const string& first,
                 const string& last,
                 int id,
                 float avg)
    : _first(first)
    , _last(last)
    , _id(id)
    , _avg(avg) {}

int Student::getID() const {
    return _id;
}

int Student::getAvg() const {
    return _avg;
}

const string& Student::getFirst() const {
    return _first;
}

const string& Student::getLast() const {
    return _last;
}