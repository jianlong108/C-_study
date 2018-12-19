//
//  initTest.cpp
//  9-Class
//
//  Created by wangjianlong on 2018/12/19.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#include "initTest.hpp"
#include <iostream>
using namespace std;

int * mallocTest()
{
    //申请4个字节的堆空间
    int *p = (int *)malloc(sizeof(int));
    cout << "mallocTest()" << *p << endl;
    *p = 10;
    
    //释放申请的内存,一一对应
    //    free(p);
    return p;
}

int * newTest()
{
    //申请4个字节的堆空间
    int *p = new int;
    //http://www.cppblog.com/luxuejuncarl/archive/2007/03/02/19137.html
    //对起始地址为p,连续sizeof(int)的空间的每一位内存用1覆盖
    memset(p, 1, sizeof(int));
    cout << "newTest()" << *p << endl;
    return p;
}

int * newTest1()
{
    //申请10 x 4 个字节的堆空间
    int *p = new int[10];
    
    cout << "newTest1()" << p[1] << endl;
    return p;
}

void initTest()
{
    int *p = (int *)malloc(sizeof(int));
    *p = 888;
    free(p);
    
    //没有初始化,有可能会是888
    int *p1 = new int;
    cout << *p1 << endl;
    delete p1;
    
    //初始化为0
    int *p2 = new int();
    cout << *p2 << endl;
    delete p2;
    
    //初始化为5
    int *p3 = new int(5);
    cout << *p3 << endl;
    delete p3;
    
    //数组元素未被初始化,首元素有可能为0
    int *p4 = new int[3];
    cout << p4[0] << endl;
    delete[] p4;
    
    //3个元素均被初始化为0
    int *p5 = new int[3]();
    cout << p5[0] << endl;
    delete[] p5;
    
    //3个元素均被初始化为0
    int *p6 = new int[3]{};
    cout << p6[0] << endl;
    delete[] p6;
    
    //首元素被初始化为6 其余元素为0
    int *p7 = new int[3]{6};
    cout << p7[0] << endl;
    delete[] p7;
}
