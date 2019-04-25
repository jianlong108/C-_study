//
//  5-inline.cpp
//  GrammerOfCpp
//
//  Created by Wangjianlong on 2019/4/25.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include "5-inline.hpp"
#include <iostream>

using namespace std;

/*内联函数
 使用inline修饰函数的声明或实现,可以使其变成内联函数
 1.建议声明和实现都增加inline修饰
 2.只是建议,并不一定会生成内联,具体还要看函数实现
 
 特点:
 >编译器直接将函数调用直接展开为函数体代码
 >可以减少函数调用的开销
 >会增大代码体积
 
 注意:
 尽量不要内联超过10行代码的函数
 有些函数即使使用inline,也不一定会被编译器内联,比如递归函数
 */

/*
 宏和内联函数的区别
 1.都可以减少函数调用的开销
 2.对比宏,内联函数多了语法检测和函数特性
 
 */

inline int sum(int a, int b)
{
    return a + b;
}

//同样会生成内联函数
inline int sub (int a , int b);
int sub (int a , int b)
{
    return a - b;
}

//同样会生成内联函数
int multiply (int a , int b);
inline int multiply (int a , int b)
{
    return a * b;
}

inline int sum_inline (int a)
{
    return a + a;
}

#define sum_define(a) (a + a)

void inlineMain()
{
    cout << "====================begin=================" << endl;
    int a = 3;
    //宏缺少内联函数的函数特性
    cout << sum_inline(a++) << endl;
    cout << sum_define(a) << endl;

    cout << sum(66, 22) << endl;
    
    cout << "====================end=================" << endl;
}
