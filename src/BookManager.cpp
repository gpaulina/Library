//
// Created by pobi on 11.01.19.
//

#include "../include/BookManager.h"
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>

using namespace std;

BookManager::BookManager() {}

BookManager::~BookManager() {

}
void BookManager::addBook(BookPtr book) {
    bookRepo.addBook(book);
}
void BookManager::removeBook(string title) {
    bookRepo.removeBook(title);
}
BookPtr BookManager::getBook(string title) {
    return bookRepo.getBook(title);
}