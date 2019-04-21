//
// Created by pobi on 11.01.19.
//

#ifndef UNTITLED1_CUSTOMER_H
#define UNTITLED1_CUSTOMER_H
#include <boost/uuid/uuid_io.hpp>
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>
#include "Book.h"
#include "CustomerType.h"
#include "Student.h"
#include "Regular.h"

using namespace std;


typedef shared_ptr<CustomerType> CustomerTypePtr;



class Customer {
private:
    string firstName;
    string lastName;
    boost::uuids::uuid ID;
    CustomerTypePtr customerType;
public:
    Customer(const string &firstName, const string &lastName,char type);

    virtual ~Customer();

    double getTotalCost(int days);

    int getMaxRentDuration();

    boost::uuids::uuid getID();

    const string &getLastName() const;

    const string &getFirstName() const;

    void changeCustomerType(char type);

    void setCustimerID(boost::uuids::uuid newID);

    const CustomerTypePtr &getCustomerType() const;
};

typedef shared_ptr<Customer> CustomerPtr;
#endif //UNTITLED1_CUSTOMER_H
