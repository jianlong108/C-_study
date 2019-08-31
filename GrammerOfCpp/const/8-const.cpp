//
//  8-const.cpp
//  GrammerOfCpp
//
//  Created by wangjianlong on 2019/4/26.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include "8-const.hpp"
#include <iostream>

using namespace std;

//struct Person {
//    int age;
//}Person;
//
//int add()
//{
//    return 2;
//}

//常引用作为参数 可以跟非const引用构成重载
//int add(int &a, int &b)
//{
//    a += b;
//    b += a;
//
//    return a + b;
//}

//int add(int const &a, int const &b)
//{
//    return a + b;
//}

void constMain()
{
//    cout << "====================begin=================" << endl;
//    struct Person p;
//    p.age = 10;
//    cout << p.age << endl;
    
    /*
     const是常量的意思，被其修饰的变量不可修改
     如果修饰的是类、结构体(的指针)，其成员也不可以更改
     */
//    const struct Person c_p{};
//    c_p = p;
//    c_p.age = 10;
//    cout << c_p.age << endl;
    
    /*
     // 将寄存器rbp存储的地址-0x14 赋值给rcx
     leaq   -0x14(%rbp), %rcx
     
     // 将 地址 == -0x14(%rbp) 存储10
     movl   $0xa, -0x14(%rbp)
     
     // 将rcx的内容（10） 存储到 -0x20(%rbp)
     movq   %rcx, -0x20(%rbp) int age = 10;
     movq   %rcx, -0x20(%rbp) const int *p0 = &age;
     
     // 将rcx的内容（10） 存储到 -0x28(%rbp)
     movq   %rcx, -0x28(%rbp) int const *p00 = &age;
     
     movq   %rcx, -0x30(%rbp) int * const p1 = &age;
     movq   %rcx, -0x38(%rbp) const int * const p2 = &age;
     movq   %rcx, -0x40(%rbp) int const * const p3 = &age;
     */
    
//    int age = 10;
//    const int *p0 = &age;
//
//    int const *p00 = &age;
//
//    int * const p1 = &age;
//
//    const int * const p2 = &age;
//    int const * const p3 = &age;
//
//    const struct Person *pP = new struct Person();
    //Cannot assign to variable 'pP' with const-qualified type 'const struct Person *'
//    pP->age = 100;
    
    
    /*
     引用可以被const修饰，这样就无法通过引用修改数据了，可以称为常引用
     const必须写在&符号的左边，才能算是常引用
     
     const引用的特点
     可以指向临时数据(常量、表达式、函数返回值等)
     可以指向不同类型的数据
     作为函数参数时(此规则也适用于const指针)
     ✓ 可以接受const和非const实参(非const引用，只能接受非const实参)
     ✓ 可以跟非const引用构成重载
     
     */
    
    
    //常引用
    //常引用指向常量
//    int const &rConstant = 10;
    
    //常引用指向表达式
//    int const &rExpression = 10 > 9;
    
    //常引用指向函数返回值
//    int const &rFunctionReturnValue = add();
    
    //常引用指向不同类型的数据
//    double const &rMutileType = 1;
    
//    add(1,2);
//    int a = 3;
//    int b = 4;
//    add(a, b);
    
//    int &rAge = age;
    
    //urAge的指向不能改变
    //int & const urAge = age;
    
//    int const &crAge = age;
    //常引用不能修改值
    //ERROR Cannot assign to variable 'crAge' with const-qualified type 'const int &'
//    crAge = 88;
    
    int age = 10;
    const int * p0 = &age;
    int const * p1 = &age;
    int * const p2 = &age;
    const int * const p3 = &age;
    int const * const p4 = &age;
    
    int b = 99;
    
    //Read-only variable is not assignable
    *p0 = 11;
    p0 = &b;
    //Read-only variable is not assignable
    *p1 = 11;
    p1 = &b;
    *p2 = 11;
    //Cannot assign to variable 'p2' with const-qualified type 'int *const'
    p2 = &b;
    //Read-only variable is not assignable
    *p3 = 11;
    //Cannot assign to variable 'p2' with const-qualified type 'int *const'
    p3 = &b;
    
    //Read-only variable is not assignable
    *p4 = 11;
    //Cannot assign to variable 'p2' with const-qualified type 'int *const'
    p4 = &b;
    
    cout << "====================end=================" << endl;
}


