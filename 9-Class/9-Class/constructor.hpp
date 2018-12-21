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
    ~Person();
    void setAge(int age);
    int getAge();
};

class Student : Person{
    float m_score;
    
public:
    
    void setScore(float score);
    float getScore();
};

#endif /* constructor_hpp */
