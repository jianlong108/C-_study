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
    float m_height = 0;
    Person();//error1 必须声明一个自定义的
    Person(int age);
    ~Person();
    void setAge(int age);
    int getAge();
};

class Student : Person
{
    //不写,默认是私有的.只有当前类可以访问
    float m_score;
private:
    float m_num;
    //受保护的,只有当前类和子类可以访问
protected:
    float m_class;
    //对外公开,全部都可以访问
public:
    
    void setScore(float score);
    float getScore();
};

class GoodStudent : public Student
{
public:
    void study()
    {
        //'m_height' is a private member of 'Person'
        //只有将上面的student类改成公有继承Person,才能保证子类可以访问
//        this->m_height = 10;
        
    }
    
};

//继承的时候,一般为public 继承.这样可以保持父类对成员(成员变量和成员函数)访问权限的控制...因为.继承的权限和自定义的权限,取最低值

#endif /* constructor_hpp */
