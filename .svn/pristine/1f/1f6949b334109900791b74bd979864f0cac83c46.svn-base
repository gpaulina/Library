//
// Created by pobi on 11.01.19.
//

#ifndef UNTITLED1_CUSTOMERREPO_H
#define UNTITLED1_CUSTOMERREPO_H
#include <boost/uuid/random_generator.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>
#include <map>
#include "Customer.h"


using namespace std;

class CustomerRepo {
private:
    map<boost::uuids::uuid, CustomerPtr> customerRepo;
public:
    CustomerRepo();

    virtual ~CustomerRepo();

    void addCustomer(CustomerPtr customer);

    void removeCustomer(boost::uuids::uuid customer);

    CustomerPtr getCustomer(boost::uuids::uuid CustomerID);

    map<boost::uuids::uuid, CustomerPtr> getAllCustomers();


};


#endif //UNTITLED1_CUSTOMERREPO_H
