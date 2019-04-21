//
// Created by pobi on 11.01.19.
//

#include "../include/Language.h"
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>

using namespace std;



Language::~Language() {

}

Language::Language(const string &title, const string &genre, int yearOfStudies, int numberOfWords) : Educational(title,
                                                                                                                 genre,
                                                                                                                 yearOfStudies),
                                                                                                     numberOfWords(
                                                                                                             numberOfWords) {}

int Language::getNumberOfWords() {
    return numberOfWords;
}


string Language::fullBookInfo() {

    stringstream strum;
    strum<<"Lang NumOfWrd "<<getNumberOfWords()<<" ";
    return Educational::fullBookInfo() +  strum.str();

}
