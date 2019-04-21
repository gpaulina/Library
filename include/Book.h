//
// Created by pobi on 11.01.19.
//

#ifndef UNTITLED1_BOOK_H
#define UNTITLED1_BOOK_H
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>

using namespace std;

class Book;


class Book {
private:
    string title;
    string genre;

public:
    virtual ~Book();

    Book( string title,  string genre);
    string getTitle();
    string getGenre();
    virtual string fullBookInfo();

};
typedef shared_ptr<Book> BookPtr;

#endif //UNTITLED1_BOOK_H
