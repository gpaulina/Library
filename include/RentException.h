//
// Created by pobi on 11.01.19.
//

#ifndef UNTITLED1_RENTEXCEPTION_H
#define UNTITLED1_RENTEXCEPTION_H
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>
#include "Customer.h"
#include "Book.h"

using namespace std;

class RentException {
public:
    RentException(const CustomerPtr customer,const BookPtr book);

    virtual ~RentException();

    CustomerPtr customer;
    BookPtr book;
    string Data="A customer tried to rent a book that is already rented bo someone else!";

};


#endif //UNTITLED1_RENTEXCEPTION_H
