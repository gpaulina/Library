//
// Created by pobi on 11.01.19.
//

#include "../include/Regular.h"
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>

using namespace std;

Regular::Regular() {}

Regular::~Regular() {

}

int Regular::getMaxRentDuration() const {
    return maxRentDuration;
}

double Regular::cost(int days) {

    if(days<=maxRentDuration)
    {
        return CustomerType::dailyFee*double(days);
    } else{
        return CustomerType::dailyFee*double(maxRentDuration) + CustomerType::dailyFee * 2 *(days-maxRentDuration) ;
    }
}

