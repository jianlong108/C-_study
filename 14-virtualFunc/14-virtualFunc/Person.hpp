//
//  Person.hpp
//  12-initializationList
//
//  Created by wangjianlong on 2018/12/22.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <iostream>
#include "Object.hpp"

using namespace std;

class Person: public Object {
    int m_age;
    float m_height;
    
public:
    Person(int age, float height);
    //含有虚函数的类,应该讲析构函数也声明为虚函数,称为虚析构函数
    virtual ~Person();
    virtual void running();
    void studying();
    
    virtual void init();
    virtual void dealloc();
};

#endif /* Person_hpp */
