//
//  7-reference.cpp
//  GrammerOfCpp
//
//  Created by Wangjianlong on 2019/4/25.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include "7-reference.hpp"
#include <iostream>

using namespace std;

//定义枚举
enum Season{
    spring,
    summer,
    fall,
    winter
};

//定义结构体
struct Student {
    int age;
};

//定义全局变量
int gA = 88;

//定义一个函数 返回一个指向 int的引用
int & changeG()
{
    return gA;
}

void pSwap(int *a,int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void rSwap(int &a,int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void referenceMain() {
//    cout << "====================begin=================" << endl;
    //lea 将地址值 存存储到寄存器。。基本在操作指针
    /*
     leaq   -0x1cc(%rbp), %rax
     leaq   -0x1ac(%rbp), %rcx ||  将地址 -0x1ac(%rbp) 写入rcx中
    
     movl   $0xa, -0x1ac(%rbp) ||  将10 写入到 地址-0x1ac(%rbp):age中 即 ==> age = 10;
     movq   %rcx, -0x1b8(%rbp) ||  将rcx存储的内容：变量age地址 写入 -0x1b8(%rbp):pAge 对应的内存中 ==> int *pAge = &age;
     movq   -0x1b8(%rbp), %rdx ||
     movl   $0x14, (%rdx)      ||  将20 写入到 rdx存储的地址:变量age地址 中 即 ==> *pAge = 20;
     movq   %rcx, -0x1c0(%rbp) ||  将rcx存储的内容：变量age地址 写入 -0x1c0(%rbp):rAge 地址中 ==> int &rAge = age;
     movq   -0x1c0(%rbp), %rcx ||  将rAge的地址值 -0x1c0(%rbp) 写入到rcx中
     movl   $0x1e, (%rcx)      ||  将30 写入到 rcx中 ==> rAge = 30;
     movq   -0x1c0(%rbp), %rcx ||  将rAge的地址值 -0x1c0(%rbp) 写入到rcx中
     movq   %rcx, -0x1c8(%rbp) ||  将rcx的值 写入到内存 -0x1c8(%rbp):p_rAge ==> int *p_rAge = &rAge;
     movq   %rax, -0x1d8(%rbp) ||  ==> Season season;
     movq   -0x1d8(%rbp), %rax ||  ==> Season &rSeason = season;
     movl   $0x3, (%rax)       ||  ==> rSeason = winter;
     
     
     */
    
    int age = 10;
    
    //定义指针
    int *pAge = &age;
    
    *pAge = 20;
//    cout << age << endl;
    
    //定义引用
    int &rAge = age;
    rAge = 30;
//    cout << age << endl;
    
    //不存在引用的引用
    //int &&rrAge = rAge;
    
    //不存在引用的引用
    //int & *pRage = &rAge;
    int *p_rAge = &rAge; //相当于 int *p_rAge = &age;
    
    
    //为枚举定义引用
    Season season;
    
    Season &rSeason = season;
    rSeason = winter;
    cout << season << endl;
    
    //为结构体定义引用
    Student stu;
    Student &rStu = stu;
    rStu.age = 10;
    
    cout << stu.age << endl;
    
    //为指针定义引用
    int height = 100;
    int width = 200;
    cout << "变量height 地址 = "<< &height <<endl;
    cout << "变量width 地址 = "<< &width <<endl;
    
    int *a = &height;
    int *b = &width;
    
    
    cout << "指针变量 a  = "<< a <<endl;
    cout << "指针变量 b  = "<< b <<endl;
    
    int *&rA = a;
    cout << "引用变量 rA  = "<< rA <<endl;
    //这个不是将b赋值给引用变量rA，而是将b赋值给a( a = b )
    //此时 指针a也指向了width.
    rA = b;
    
    //操作指针变量a，使其指向age变量
    a = &age;
    
    cout << "引用变量 rA  = "<< rA <<endl;
    //此时修改a指向的变量的值,相当于修改width的值
    //    *a = 300;
    //    cout << "height = " << height << endl;
    //    cout << "width = " << width << endl;
    
    //此时相当于修改height
    *a = 400;
    cout << "height = " << height << endl;
    cout << "width = " << width << endl;
    
    
    //为数组定义引用
    int array[] = {1,2,3};
    
    //不存在引用数组
//    int &rArray[] = array;
    
    int (&rArray)[3] = array;
    cout << "数组引用：" << rArray[1] << endl;
    
    //指向数组的指针
    int *pArr = array;
    cout << "数组指针：" << pArr[2] << endl;
    
    // 指针的常引用 可以表示数组
    int * const &rArr = array;
    cout << "指针的常引用：" << rArr[0] << endl;
    
    //    int *pA[4];//pA是数组,里面放着4个int *的指针
    //    int (*pB)[4];//pA是指向数组的指针,且数组中存放的是4个int
    
    int w = 66;
    int *pW = &w;
    int *&rW = pW;
    *rW = 88;
    
    
    cout << w << endl;
    cout << pW << endl;
    cout << rW << endl;
    
    //引用的价值。。。修改函数返回值
    changeG() = 66;
    cout << gA << endl;
    
    int score = 100;
    const int &rScore = score;
    //当常引用指向了不同类型的数据时,会产生临时变量,即引用指向的并不是初始变量
    const double &rScore1 = score;
    score = 99;
    cout << "score = " << score << endl;
    cout << "rScore = " << rScore << endl;
    cout << "rScore1 = " << rScore1 << endl;
    
    int sA = 10;
    int sB = 20;
    cout << "sA = " << sA << endl;
    cout << "sB = "<< sB << endl;
    //表达式被赋值
    (sA = sB) = 30;
    cout << "sA = " << sA << endl;
    
    pSwap(&sA, &sB);
    cout << sA << endl;
    cout << sB << endl;
    
    rSwap(sA, sB);
    cout << sA << endl;
    cout << sB << endl;
    
    
    
    cout << "====================end=================" << endl;
}
