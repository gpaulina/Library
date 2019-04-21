//
// Created by pobi on 11.01.19.
//

#include "../include/Book.h"
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>

using namespace std;


Book::~Book() {

}

Book::Book( string title, string genre) : title(title), genre(genre) {}

 string Book::getTitle() {
    return title;
}

string Book::getGenre() {
    return genre;
}
    string Book::fullBookInfo() {
        return string("Book ") + title + string(" ") + genre;
}


