//
// Created by pobi on 11.01.19.
//

#include "../include/Educational.h"
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>

using namespace std;

Educational::Educational(const string &title, const string &genre, int yearOfStudies) : Book(title, genre),
                                                                                        yearOfStudies(yearOfStudies) {}

Educational::~Educational() {

}

int Educational::getYearOfStudies() {
    return yearOfStudies;
}

string Educational::fullBookInfo() {
    stringstream strum;
    strum<<" Educational YearOStud "<<getYearOfStudies()<<" ";
    return Book::fullBookInfo() +  strum.str();
}
