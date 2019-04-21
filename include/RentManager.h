//
// Created by pobi on 11.01.19.
//

#ifndef UNTITLED1_RENTMANAGER_H
#define UNTITLED1_RENTMANAGER_H
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>
#include "Rent.h"
#include "RentException.h"
#include "RentRepo.h"

using namespace std;

class RentManager {
private:
    RentRepo rentRepo;
public:
    RentManager();

    virtual ~RentManager();

    boost::uuids::uuid rentBook(BookPtr book,CustomerPtr customer);

    double returnBook(boost::uuids::uuid ID);

    map<boost::uuids::uuid,RentPtr> getRentForCustomer(boost::uuids::uuid customer);

};


#endif //UNTITLED1_RENTMANAGER_H
