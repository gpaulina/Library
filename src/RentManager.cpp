//
// Created by pobi on 11.01.19.
//
#include "../include/RentManager.h"
#include <boost/uuid/random_generator.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>
#include <map>
#include "Rent.h"
#include "RentException.h"

RentManager::RentManager() {}

RentManager::~RentManager() {

}

boost::uuids::uuid RentManager::rentBook(BookPtr book, CustomerPtr customer) {
    map<boost::uuids::uuid, RentPtr>::iterator it;
    //RentException RE(customer, book);
    it = rentRepo.getAllRents().begin();
    //for(it = rentRepo.getAllRents().begin(); it != rentRepo.getAllRents().end(); it++)
    int x;
    x = rentRepo.getAllRents().size();
    if(x != 0) {
        do {
            if (it->second->getBook() == book) {
                throw(RentException(customer, book));
//                throw runtime_error("Cannot rent same book to a different customer");
            }
            it++;
        } while (it != rentRepo.getAllRents().end());
    }

    RentPtr createdRent = make_shared<Rent>(customer,book);
    rentRepo.rentBook(createdRent);
    return createdRent->getID();
}

double RentManager::returnBook(boost::uuids::uuid ID) {
    return rentRepo.returnBook(ID);
}

map<boost::uuids::uuid,RentPtr> RentManager::getRentForCustomer(boost::uuids::uuid customer) {
    map<boost::uuids::uuid,RentPtr> pom;
    for(auto& it: rentRepo.getAllRents())
    {
        if(it.second->getCustomer()->getID()== customer)
        {
            pom[it.first]= it.second;
            //pom[customer]->setID(it.first);
        }
    }
    return pom;
}