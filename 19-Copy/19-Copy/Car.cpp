//
//  Car.cpp
//  19-Copy
//
//  Created by Wangjianlong on 2018/12/24.
//  Copyright © 2018 JL.Com. All rights reserved.
//

#include "Car.hpp"

using namespace std;

Car::Car()
{
    cout << "car()" << endl;
}

Car::~Car()
{
    if (this->m_name != NULL) {
        delete [] this->m_name;
        this->m_name = NULL;
    }
    cout << "~car()" << endl;
}

Car::Car(int speed, const char* name):m_speed(speed)
{
    if (name != NULL) {
        //申请堆空间存储字符串内容
        this->m_name = new char [strlen(name) + 1]{};
//        memset(this->m_name, 0, strlen(name)+1);
        //将内容拷贝到申请的空间中
        strcpy(this->m_name, name);
    }
    cout << "Car(int speed, const char* name)" << endl;
}

void Car::display()
{
    cout << "speed = " << this->m_speed << " name= "<< this->m_name << endl;
}
