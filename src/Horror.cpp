//
// Created by pobi on 11.01.19.
//

#include "../include/Horror.h"
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>

using namespace std;

Horror::Horror(const string &title, const string &genre, int ageLimit) : Book(title, genre), ageLimit(ageLimit) {}

Horror::~Horror() {

}

int Horror::getAgeLimit() {
    return ageLimit;
}


string Horror::fullBookInfo() {
    stringstream strum;
    strum<<"Horror AgeLim "<<getAgeLimit()<<" ";
    return Book::fullBookInfo() + strum.str();
}
