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

void referenceMain() {
    cout << "====================begin=================" << endl;
    int age = 10;
    
    //定义指针
    int *pAge = &age;
    
    *pAge = 20;
    cout << age << endl;
    
    //定义引用
    int &rAge = age;
    rAge = 30;
    cout << age << endl;
    
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
    cout << "height 地址 = "<< &height <<endl;
    cout << "width 地址 = "<< &width <<endl;
    
    int *a = &height;
    int *b = &width;
    int *&rA = a;
    //指针a也指向了width.
    rA = b;
    
    cout << "a  = "<< a <<endl;
    cout << "b  = "<< b <<endl;
    cout << "rA  = "<< rA <<endl;
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
    int (&rArray)[3] = array;
    cout << rArray[1] << endl;
    
    //    int *pA[4];//pA是数组,里面放着4个int *的指针
    //    int (*pB)[4];//pA是指向数组的指针,且数组中存放的是4个int
    
    int w = 66;
    int *pW = &w;
    int *&rW = pW;
    *rW = 88;
    
    
    cout << w << endl;
    cout << pW << endl;
    cout << rW << endl;
    
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
    
    cout << "====================end=================" << endl;
}
