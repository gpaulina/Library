//
// Created by pobi on 11.01.19.
//

#ifndef UNTITLED1_CUSTOMERTYPE_H
#define UNTITLED1_CUSTOMERTYPE_H
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>

using namespace std;

class CustomerType {
private:
    int maxRentDuration;
protected:
    double dailyFee = 5;
public:
    CustomerType();

    virtual ~CustomerType();

    virtual double cost(int days)=0;

    virtual int getMaxRentDuration() const;

    double getDailyFee() const;

};
typedef shared_ptr<CustomerType> CustomerTypePtr;

#endif //UNTITLED1_CUSTOMERTYPE_H
