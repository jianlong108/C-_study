//
//  2-funcReLoad.cpp
//  6-inline
//
//  Created by wangjianlong on 2019/4/25.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include "2-funcReLoad.hpp"
#include <iostream>

using namespace std;

/*
 函数重载
 
 ㊗️C语言不支持函数重载
 
 ㊗️函数名相同 参数个数不同、参数类型不同、参数顺序不同
 
 ㊗️注意
 返回值类型与函数重载无关
 调用函数时，实参的隐式类型转换可能会产生二义性
 
 ㊗️本质
 采用了name mangling或者叫name decoration技术
 ✓ C++编译器默认会对符号名(变量名、函数名等)进行改编、修饰，有些地方翻译为“命名倾轧” ✓ 重载时会生成多个不同的函数名，不同编译器(MSVC、g++)有不同的生成规则
 ✓ 通过IDA打开【VS_Release_禁止优化】可以看到
 
 
 */

int sum (int a, int b)
{
    cout << "call: int sum (int a, int b)" << " a =" <<a <<" b= "<< b << "  ";
    return a + b;
}

int sum (double a, int b)
{
    cout << "call: int sum (double a, int b)"<< " a =" <<a <<" b= "<< b << "  ";
    return a + b;
}

int sum (int a, int b, int c)
{
    cout << "call: int sum (int a, int b, int c)" << " a =" <<a <<" b= "<< b << "  ";
    return a + b + c;
}

void test(int a)
{
    
}

void test(double a)
{
    
}

void funcReload()
{
    cout << "====================begin=================" << endl;
    
    cout << sum(10, 90) << endl;
    cout << sum(10.0, 90) << endl;
    cout << sum(10, 90, 100) << endl;
    
    //调用二义性
    //Invalid operands to binary expression ('std::__1::ostream' (aka 'basic_ostream<char>') and 'void')
    //    cout << test(10) << endl;
    
    cout << "====================end=================" << endl;
}
