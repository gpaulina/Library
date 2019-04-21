//
// Created by pobi on 11.01.19.
//

#ifndef UNTITLED1_STUDENT_H
#define UNTITLED1_STUDENT_H
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>
#include "CustomerType.h"

using namespace std;

class Student:public CustomerType {
private:
    const int maxRentDuration = 15;
public:
    Student();

    virtual ~Student();

    double cost(int days);

    int getMaxRentDuration() const;



};
typedef shared_ptr<Student> StudentPtr;

#endif //UNTITLED1_STUDENT_H
