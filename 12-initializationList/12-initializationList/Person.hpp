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
using namespace std;

class Person {
    int m_age;
    float m_height;
    
public:
    Person(int age, float height);
     void running();
};

#endif /* Person_hpp */
