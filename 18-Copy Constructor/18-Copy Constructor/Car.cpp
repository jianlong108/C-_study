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

//调用父类的拷贝构造函数
Car::Car(const Car&car):Object(car)
{
    this->m_speed = car.m_speed;
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

Car::Car(int referenceCount,int speed):Object(referenceCount),m_speed(speed)
{
    cout << "Car(int referenceCount,int speed):Object(referenceCount),m_speed(speed)" << endl;
}
