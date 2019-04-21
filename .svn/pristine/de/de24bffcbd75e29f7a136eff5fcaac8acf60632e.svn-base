//
// Created by pobi on 11.01.19.
//

#ifndef UNTITLED1_EDUCATIONAL_H
#define UNTITLED1_EDUCATIONAL_H
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>
#include "Book.h"


using namespace std;

class Educational: public Book {
protected:
    int yearOfStudies;
public:
    Educational(const string &title, const string &genre, int yearOfStudies);

    virtual ~Educational();

    int getYearOfStudies();


    virtual string fullBookInfo();
};
typedef shared_ptr<Educational> EducationalPtr;

#endif //UNTITLED1_EDUCATIONAL_H
