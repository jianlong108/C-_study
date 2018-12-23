//
//  Person.cpp
//  12-initializationList
//
//  Created by wangjianlong on 2018/12/22.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#include "Person.hpp"

//初始化列表只能写在实现中
Person::Person(int age, float height):m_age(age),m_height(height)
{
    cout << "age = " << this->m_age << endl;
    cout << "height = " << this->m_height << endl;
}
Person::~Person()
{
    cout << "~Person()" << endl;
}
void Person::running()
{
    cout << "Person::running()" << endl;
}

void Person::studying()
{
    cout << "Person::studying()" << endl;
}

void Person::init()
{
    cout << "Person::init()" << endl;
}

void Person::dealloc()
{
    cout << "Person::dealloc()" << endl;
}
