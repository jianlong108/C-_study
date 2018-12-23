//
//  Student.cpp
//  12-initializationList
//
//  Created by Wangjianlong on 2018/12/23.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#include "Student.hpp"

Student::Student(float score,int age,float height):m_score(score),Person(age,height)
{
    cout << "Student(float score,int age,float height)" << endl;
}

Student::Student(float score):m_score(score),Person(0,0)
{
    cout << "Student(float score)" << endl;
}

Student::~Student()
{
    cout << "~Student()" << endl;
}

void Student::running()
{
    cout << "Student::running()" << endl;
}
