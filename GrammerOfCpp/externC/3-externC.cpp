//
//  externC.cpp
//  GrammerOfCpp
//
//  Created by Wangjianlong on 2019/4/25.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include "3-externC.hpp"
#include <iostream>

//使用C语言 的文件
//extern "C" {
//    #include "3-test.h"
//}

#include "3-test.h"

using namespace std;

/*
 
 extern "C" 告诉编译器，函数按照C语言去加载
 
 下述代码会报错

extern "C" int sum (int a, int b)
{
    cout << "call: int sum (int a, int b)" << " a =" <<a <<" b= "<< b << "  ";
    return a + b;
}

extern "C" int sum (double a, int b)
{
    cout << "call: int sum (double a, int b)"<< " a =" <<a <<" b= "<< b << "  ";
    return a + b;
}

*/


/*
下述代码会报错  依然是C语言不支持函数重载
extern "C" {
    int sum (double a, int b)
    {
        return a + b;
    }
    
    int sum (int a, int b)
    {
        return a + b;
    }
}
*/
int sum (int a, int b)
{
    cout << "call: int sum (int a, int b) " << endl;
    return a + b;
}

void externCMain()
{
    cout << "====================begin=================" << endl;
    
    cout << sum(2, 8) << endl;
    cout << sum(2, 8) << endl;
    
    
    //默认情况下，.c文件会被c++编译器。生成函数名等规则都是C++的规则。则可能找不到c语言下的 cSum 函数
    /*
     Undefined symbols for architecture x86_64:
     "cSum(int, int)", referenced from:
     externCMain() in 3-externC.o
     ld: symbol(s) not found for architecture x86_64
     clang: error: linker command failed with exit code 1 (use -v to see invocation)
     */
    cout << cSum(3, 44) << endl;
    cout << "====================end=================" << endl;
}
