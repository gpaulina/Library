//
// Created by pobi on 11.01.19.
//

#ifndef UNTITLED1_LANGUAGE_H
#define UNTITLED1_LANGUAGE_H
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>
#include "Educational.h"


using namespace std;

class Language:public Educational {
private:
    int numberOfWords;
public:
    Language(const string &title, const string &genre, int yearOfStudies, int numberOfWords);

    virtual ~Language();

    int getNumberOfWords();

    string fullBookInfo();

};
typedef shared_ptr<Language> LanguagePtr;

#endif //UNTITLED1_LANGUAGE_H
