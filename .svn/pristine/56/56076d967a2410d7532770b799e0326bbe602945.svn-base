//
// Created by pobi on 11.01.19.
//

#ifndef UNTITLED1_BOOKMANAGER_H
#define UNTITLED1_BOOKMANAGER_H
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>
#include "BookRepo.h"

using namespace std;


class BookManager {
private:
    BookRepo bookRepo;
public:
    BookManager();

    virtual ~BookManager();
    void addBook(BookPtr book);

    void removeBook(string title);

    BookPtr getBook(string title);

};


#endif //UNTITLED1_BOOKMANAGER_H
