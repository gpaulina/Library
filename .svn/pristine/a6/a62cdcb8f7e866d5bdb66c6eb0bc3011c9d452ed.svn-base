//
// Created by pobi on 11.01.19.
//

#ifndef UNTITLED1_RENTREPO_H
#define UNTITLED1_RENTREPO_H
#include <boost/uuid/random_generator.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>
#include <map>
#include "Rent.h"

using namespace std;

class RentRepo {
private:
    map<boost::uuids::uuid, RentPtr> rentRepo;
public:

    RentRepo();

    virtual ~RentRepo();

    void rentBook(RentPtr rent);

    double returnBook(boost::uuids::uuid ID);

    map<boost::uuids::uuid, RentPtr> getAllRents();

};


#endif //UNTITLED1_RENTREPO_H
