//
// Created by pobi on 11.01.19.
//

#include "../include/CustomerManager.h"
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>

using namespace std;

CustomerManager::CustomerManager(){}

CustomerManager::~CustomerManager() {

}

void CustomerManager::addCustomer(CustomerPtr customer) {
    customerRepo.addCustomer(customer);
}

void CustomerManager::removeCustomer(boost::uuids::uuid CustomerID) {
    customerRepo.removeCustomer(CustomerID);
}

void CustomerManager::changeCustomerType(boost::uuids::uuid CustomerID, char Type) {
    customerRepo.getCustomer(CustomerID)->changeCustomerType(Type);
}
CustomerPtr CustomerManager::getCustomer(boost::uuids::uuid CustomerID) {
    return customerRepo.getCustomer(CustomerID);
}
map<boost::uuids::uuid, CustomerPtr> CustomerManager::getAllCustomers() {
    return customerRepo.getAllCustomers();
}