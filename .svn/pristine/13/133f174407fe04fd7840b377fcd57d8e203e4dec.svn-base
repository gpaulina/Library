//
// Created by pobi on 11.01.19.
//

#ifndef UNTITLED1_BOOKREPO_H
#define UNTITLED1_BOOKREPO_H
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>
#include <map>
#include "Book.h"

using namespace std;



class BookRepo {
private:
    std::map<string, BookPtr> bookRepo;
public:
    BookRepo();

    virtual ~BookRepo();

    void addBook(BookPtr book);

    void removeBook(string title);

    BookPtr getBook(string title);

};


#endif //UNTITLED1_BOOKREPO_H





