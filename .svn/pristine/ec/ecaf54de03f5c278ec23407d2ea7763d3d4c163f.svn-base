//
// Created by pobi on 11.01.19.
//

#include "../include/Math.h"
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>

using namespace std;

Math::Math(const string &title, const string &genre, int yearOfStudies, int numberOfEquations) : Educational(title,
                                                                                                             genre,
                                                                                                             yearOfStudies),
                                                                                                 numberOfEquations(
                                                                                                         numberOfEquations) {}

Math::~Math() {

}

int Math::getNumberOfEquations() {
    return numberOfEquations;
}

string Math::fullBookInfo() {
    stringstream strum;
    strum<<"Math NumOfEq "<<getNumberOfEquations()<<" ";
    return Educational::fullBookInfo() +  strum.str();
}
