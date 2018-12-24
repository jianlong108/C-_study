//
//  Car.cpp
//  18-Copy Constructor
//
//  Created by wangjianlong on 2018/12/24.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#include "Car.hpp"

using namespace std;

//通过初始化列表初始化
//Car::Car():r_speed(m_speed)
//{
//    cout << "Car()" << endl;
//}

Car::Car(const Car&car)
{
    cout << "Car(const Car&car)" << endl;
}

Car::Car()
{
    cout << "Car()" << endl;
}

Car::~Car()
{
    cout << "~Car()" << endl;
}
