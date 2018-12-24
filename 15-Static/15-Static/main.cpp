//
//  main.cpp
//  15-Static
//
//  Created by wangjianlong on 2018/12/24.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#include <iostream>
#include "Car.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    Car car = Car();
    Car *p_car = new Car();
    //静态成员可以通过对象指针(对象指针->静态成员)访问
    cout << p_car->ms_price << endl;
    
    //静态成员可以通过对象(对象.静态成员)访问
    cout << car.ms_price << endl;
    
    //静态成员可以通过类访问(类::静态成员)访问
    cout << Car::ms_price << endl;
    
    return 0;
}
