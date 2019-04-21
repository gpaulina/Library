//
// Created by pobi on 11.01.19.
//

#ifndef UNTITLED1_MATH_H
#define UNTITLED1_MATH_H
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>
#include "Educational.h"

using namespace std;

class Math: public Educational {
private:
    int numberOfEquations;
public:

    Math(const string &title, const string &genre, int yearOfStudies, int numberOfEquations);

    virtual ~Math();

    int getNumberOfEquations();

    string fullBookInfo();
};
typedef shared_ptr<Math> MathPtr;

#endif //UNTITLED1_MATH_H
