//
// Created by pobi on 11.01.19.
//

#include "../include/Customer.h"
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>
#include <boost/uuid/random_generator.hpp>

using namespace std;

Customer::Customer(const string &firstName, const string &lastName,char Type) : firstName(firstName), lastName(lastName) {
    if(Type=='S'|| Type == 's') {
        customerType = make_shared<Student>();
    }
    else {
        customerType = make_shared<Regular>();
    }
    ID = boost::uuids::random_generator()();

}

Customer::~Customer() {

}

boost::uuids::uuid Customer::getID() {
    return this->ID;
}

double Customer::getTotalCost(int days) {
    return customerType->cost(days);
}


int Customer::getMaxRentDuration() {
    return customerType->getMaxRentDuration();
}

void Customer::changeCustomerType(char Type) {
    if(Type == 'S'|| Type == 's'){
        customerType = make_shared<Student>();
    } else
    {
        customerType = make_shared<Regular>();
    }
}

void Customer::setCustimerID(boost::uuids::uuid newID) {
    ID = newID;
}

const string &Customer::getFirstName() const {
    return firstName;
}

const string &Customer::getLastName() const {
    return lastName;
}

const CustomerTypePtr &Customer::getCustomerType() const {
    return customerType;
}
