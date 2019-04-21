//
// Created by pobi on 11.01.19.
//

#include "../include/BookRepo.h"



using namespace std;

BookRepo::BookRepo() {}

BookRepo::~BookRepo() {

}

void BookRepo::addBook(BookPtr book) {
    this->bookRepo[book->getTitle()] = book;
}

void BookRepo::removeBook(string title) {
    this->bookRepo.erase(title);
}

BookPtr BookRepo::getBook(string title) {
    if(bookRepo.find(title)==bookRepo.end())
    {
        return make_shared<Book>("BookNotExisting","error");
    }
    return bookRepo[title];
}
