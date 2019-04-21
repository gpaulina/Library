//
// Created by pobi on 11.01.19.
//

#include "../include/Student.h"
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>

using namespace std;

Student::Student() {}

Student::~Student() {

}

int Student::getMaxRentDuration() const {
    return maxRentDuration;
}

double Student::cost(int days) {
    if(days<=maxRentDuration)
    {
        return CustomerType::dailyFee*0.5*double(days);
    } else{
        return CustomerType::dailyFee*0.5*double(maxRentDuration) +CustomerType::dailyFee*0.75 *(days-maxRentDuration) ;
    }
}



