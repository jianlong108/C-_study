//
//  HelloWorld.cpp
//  6-inline
//
//  Created by wangjianlong on 2019/4/25.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include "1-HelloWorld.hpp"
#include <iostream>

using namespace std;
/*
 C++中常使用cin、cout进行控制台的输入、输出
 
 cin用的右移运算符>>
 cout用的是左移运算符<<
 endl是换行的意思
 */



void helloWorldMain()
{
    cout << "====================begin=================" << endl;
    int age = 1;
    
    cout << "hello world" << endl << "age == " << age <<endl;
    
    cout << "请为age输入一个新值:" << endl;
    cin >> age;
    
    cout << "age == " << age << endl;
    
    cout << "====================end=================" << endl;
}
