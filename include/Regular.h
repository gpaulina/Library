//
// Created by pobi on 11.01.19.
//

#ifndef UNTITLED1_REGULAR_H
#define UNTITLED1_REGULAR_H
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <sstream>
#include "CustomerType.h"

using namespace std;

class Regular:public CustomerType {
private:
    int maxRentDuration=10;
public:
    Regular();

    ~Regular();

    double cost(int days);

    int getMaxRentDuration() const;
};
typedef shared_ptr<Regular> RegularPtr;


#endif //UNTITLED1_REGULAR_H
