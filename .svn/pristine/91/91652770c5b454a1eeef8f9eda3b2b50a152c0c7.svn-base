//
// Created by pobi on 11.01.19.
//

#include "../include/CustomerRepo.h"
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>

using namespace std;

CustomerRepo::CustomerRepo() {}

CustomerRepo::~CustomerRepo() {

}

void CustomerRepo::addCustomer(CustomerPtr customer) {
    this->customerRepo[customer->getID()] = customer;
}

void CustomerRepo::removeCustomer(boost::uuids::uuid customerID) {
    this->customerRepo.erase(customerID);
}

CustomerPtr CustomerRepo::getCustomer(boost::uuids::uuid CustomerID) {
    if(customerRepo.find(CustomerID)==customerRepo.end())
    {
        return make_shared<Customer>("CustomerNotExisting","error",'s');
    }
    return customerRepo[CustomerID];
}

map<boost::uuids::uuid, CustomerPtr> CustomerRepo::getAllCustomers() {
    return customerRepo;
}


