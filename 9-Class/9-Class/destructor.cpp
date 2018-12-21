//
//  destructor.cpp
//  9-Class
//
//  Created by wangjianlong on 2018/12/19.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#include "destructor.hpp"

#include <iostream>
using namespace std;

Student::Student()
{
    cout << "Student::Student()" <<endl;
}

Student::Student(int score)
{
    this ->m_score = score;
    
    
    this ->p = new Person();

    //这样写,相当于在栈空间
//    Person person;
//    this->p = &person;
    
    cout << "Student::Student(int score)" <<endl;
}

//析构函数 释放掉Student对象内部申请的堆空间
Student::~Student()
{
    //释放掉内部申请的堆空间内存
    delete this->p;
    cout << "~Student()" <<endl;
}

void Student::setScore(int score)
{
    this ->m_score = score;
}

int Student::getScore()
{
    return this->m_score ;
}


