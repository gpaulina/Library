//
// Created by pobi on 11.01.19.
//

#include "../include/Rent.h"
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>

using namespace std;

Rent::Rent(CustomerPtr customer, BookPtr book) : customer(customer), book(book),beginDate(LTime(PTime(boost::posix_time::second_clock::local_time()), TZone())) {
    ID = boost::uuids::random_generator()();
}

Rent::~Rent() {

}

boost::uuids::uuid Rent::getID() {
    return ID;
}



 CustomerPtr Rent::getCustomer()  {
    return customer;
}


BookPtr Rent::getBook() {
    return book;
}

int Rent::rentDuration() {
    int days=0;
    boost::posix_time::time_period period(beginDate.local_time(),boost::posix_time::second_clock().local_time());
    return std::floor(period.length().hours()/24.0+1);
    return days;
}

double Rent::rentCost() {
    return customer->getTotalCost(rentDuration());
}

void Rent::setBeginDate(LTime choosenBeginDate) {
    beginDate=choosenBeginDate;
}

void Rent::setID(boost::uuids::uuid ID) {
    Rent::ID = ID;
}
