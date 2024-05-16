#ifndef LEARN_CPP_STUDENT_H
#define LEARN_CPP_STUDENT_H

#include <string>

using std::string;

class Student {
    string _first = "First";
    string _last  = "Last";
    int    _id    = 0;
    float  _avg   = 0;
public:
    Student() = default;
    Student(const string& first, const string& last, int id, float avg);
    int getID() const;
    int getAvg() const;
    const string& getFirst() const;
    const string& getLast() const;
    void print() const;
};

#endif //LEARN_CPP_STUDENT_H