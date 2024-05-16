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
    Student();
    Student(const string& first, const string& last, int id, float avg);
    [[nodiscard]] int getID() const;
    [[nodiscard]] int getAvg() const;
    [[nodiscard]] const string& getFirst() const;
    [[nodiscard]] const string& getLast() const;
    void print() const;
};

#endif //LEARN_CPP_STUDENT_H