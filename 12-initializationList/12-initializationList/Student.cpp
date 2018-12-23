//
//  Student.cpp
//  12-initializationList
//
//  Created by Wangjianlong on 2018/12/23.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#include "Student.hpp"

//Student::Student()
//{
//    cout << "Student()" << endl;
//}


//Constructor for 'Student' must explicitly initialize the base class 'Person' which does not have a default constructor
//Student::Student(float score):m_score(score)
//{
////    this ->m_score = score;
//    cout << "Student(float score)" << endl;
//}

Student::Student(float score,int age,float height):m_score(score),Person(age,height)
{
    
}

Student::Student(float score):m_score(score),Person(0,0)
{
    cout << "Student(float score)" << endl;
}


