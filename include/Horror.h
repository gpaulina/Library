//
// Created by pobi on 11.01.19.
//

#ifndef UNTITLED1_HORROR_H
#define UNTITLED1_HORROR_H
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>
#include "Book.h"

using namespace std;

class Horror: public Book {
private:
    int ageLimit;
public:
    Horror(const string &title, const string &genre, int ageLimit);

    virtual ~Horror();

    int getAgeLimit();
    string fullBookInfo();
};
typedef shared_ptr<Horror> HorrorPtr;

#endif //UNTITLED1_HORROR_H
