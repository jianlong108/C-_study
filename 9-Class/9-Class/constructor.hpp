//
//  constructor.hpp
//  9-Class
//
//  Created by wangjianlong on 2018/12/19.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#ifndef constructor_hpp
#define constructor_hpp

#include <stdio.h>

class Person {
    int m_age = 0;
    
public:
    Person();//error1 必须声明一个自定义的
    Person(int age);
    void setAge(int age);
    int getAge();
};

class Man {
    float m_height;
    
public:
    
    void setHeight(float height);
    float getHeight();
};

#endif /* constructor_hpp */
