//
//  Car.cpp
//  15-Static
//
//  Created by wangjianlong on 2018/12/24.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#include "Car.hpp"

//初始化错误 C++ requires a type specifier for all declarations
//Car::ms_existing_count = 0;

//当类的声明和实现分离时,需要将静态成员的初始化放在实现中
int Car::ms_existing_count = 0;

int Car::ms_price = 8888;

int Car::getExistingCount()
{
    return ms_existing_count;
}

Car::Car()
{
    ms_existing_count ++;
}

Car::~Car()
{
    ms_existing_count--;
}
