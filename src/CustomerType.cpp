//
// Created by pobi on 11.01.19.
//

#include "../include/CustomerType.h"
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>

using namespace std;

CustomerType::CustomerType() {}

CustomerType::~CustomerType() {

}

int CustomerType::getMaxRentDuration() const {
    return maxRentDuration;
}

double CustomerType::getDailyFee() const {
    return dailyFee;
}