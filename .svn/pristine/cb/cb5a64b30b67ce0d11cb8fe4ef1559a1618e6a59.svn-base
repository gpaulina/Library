//
// Created by pobi on 11.01.19.
//

#ifndef UNTITLED1_CUSTOMERMANAGER_H
#define UNTITLED1_CUSTOMERMANAGER_H
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>
#include "CustomerRepo.h"
using namespace std;

class CustomerManager {
private:
    CustomerRepo customerRepo;
public:
    CustomerManager();

    virtual ~CustomerManager();

    void addCustomer(CustomerPtr customer);

    void removeCustomer(boost::uuids::uuid customer);

    void changeCustomerType(boost::uuids::uuid customer, char Type);

    CustomerPtr getCustomer(boost::uuids::uuid CustomerID);

    map<boost::uuids::uuid, CustomerPtr> getAllCustomers();

};


#endif //UNTITLED1_CUSTOMERMANAGER_H
