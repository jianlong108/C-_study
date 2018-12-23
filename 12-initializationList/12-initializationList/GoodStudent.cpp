//
//  GoodStudent.cpp
//  12-initializationList
//
//  Created by Wangjianlong on 2018/12/23.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#include "GoodStudent.hpp"

//GoodStudent::GoodStudent()
//{
//    cout << "GoodStudent()" << endl;
//}

GoodStudent::GoodStudent(float cash):Student(0)
{
    this ->m_cash = cash;
    cout << "GoodStudent(float cash)" << endl;
}
void GoodStudent::running()
{
    cout << "GoodStudent::running()" << endl;
}
