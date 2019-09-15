//
//  11-initializationList.cpp
//  GrammerOfCpp
//
//  Created by wangjianlong on 2019/4/30.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include "11-initializationList.hpp"
/*
 一种便捷的初始化成员变量的方式
 只能用在构造函数中
 初始化顺序只跟成员变量的声明顺序有关
 
 */
//Man :: Man(int age, float height)
//{
//    this->m_age = age;
//    this->m_height = height;
//}

//构造函数之间的相互调用
Man :: Man():Man(10,20)
{
}

//初始化列表与默认参数。。
// 如果函数声明和实现是分离的
// 初始化列表只能写在函数的实现中
//  默认参数只能写在函数的声明中

//Man :: Man(int age = 1):m_age(age)
//{
//}

Man :: Man(int age, float height):m_age(age),m_height(height)
{
}

Man::~Man()
{
    this->m_name = NULL;
}

void Man::running()
{
    cout << "void Man::running()" <<endl;
}

void Man::setName(const char *name)
{
    if (this->m_name == name) {
        return;
    }
    if (this->m_name != NULL) {
        delete [] this->m_name;
        this->m_name = NULL;
    }
    
    if (name != NULL) {
        this->m_name = new char[strlen(name) + 1];
        strcpy(this->m_name, name);
    }
}

const char * Man::getName()
{
    return this->m_name;
}

//Soccer::Soccer()
//{
//    
//}

void Soccer :: playFootball()
{
    cout << "Soccer :: playFootball()" << endl;
}
