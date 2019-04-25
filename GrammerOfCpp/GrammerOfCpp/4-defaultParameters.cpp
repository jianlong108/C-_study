//
//  4-defaultParameters.cpp
//  GrammerOfCpp
//
//  Created by Wangjianlong on 2019/4/25.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include "4-defaultParameters.hpp"
#include <iostream>

using namespace std;
/*
 C++允许函数设置默认参数，在调用时可以根据情况省略实参，规则如下：
 > 默认参数只能按照从右向左的顺序
 > 如果函数同时有声明，实现，默认参数只能放在函数声明中
 > 默认参数的值可以是常量，全局符号（全局变量，函数名）
 
 */

//ERROR Missing default argument on parameter 'b'
//void errorFunc(int a = 10, int b)
//{
//
//}


// 如果函数同时有声明，实现，默认参数只能放在函数声明中
void funcDeclare(int a)
{
    cout << "void funcDeclare(int a)  " << a << endl;
}

void customPrint(int a = 1)
{
    cout << a << endl;
}

int adjustingValue(int a = 20)
{
    cout << a << endl;
    return a;
}

int adjustingValue(int a = 20 ,int b = 30)
{
    cout << a << endl;
    return a + b;
}

string g_a = "hhh";

void displayValue (string a = g_a)
{
    cout << "void displayValue (string a = g_a)" << a << endl;
}

void displayTest()
{
    cout << "CALL: void displayTest()" <<endl;
}

void callFunc(void(*func)())
{
    cout << "CALL: void callFunc(void(*func)())" << endl;
    func();
}

//默认参数的值 可以是 函数名
void callFunc(int a = 19, void(*func)() = displayTest)
{
    cout << "CALL: callFunc(int a = 19, void(*func)() = displayTest)" << endl;
    func();
    cout << a << endl;
}

void defaultParametersMain()
{
    //调用函数时，不传入参数，也会打印 默认值20
    customPrint();
    
    //调用产生二义性。调用上述两个函数都可以
    //ERROR: Call to 'adjustingValue' is ambiguous
    //adjustingValue();
    
    funcDeclare();
    
    displayValue();
    
    callFunc();
}
