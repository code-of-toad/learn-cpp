#include <iostream>
#include <vector>
#include "student.h"

using std::cout, std::endl, std::string, std::vector;

void cppVectors();

int main() {
//    cppVectors();
    return 0;
}

void cppVectors() {
    vector<float> nums = {11.2f, 22.1f, 33, 44, 55};

    for (auto val : nums) {
        cout << val << '\n';
    } cout << '\n';
}
