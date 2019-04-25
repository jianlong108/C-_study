//
//  3-externC.c
//  GrammerOfCpp
//
//  Created by Wangjianlong on 2019/4/25.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include "3-test.h"

int cSum (int a, int b)
{
    printf("call: int cSum (int a, int b) \n");
    return a - b;
}

int cAdd (int a, int b)
{
    printf("C函数 call: int cAdd (int a, int b) \n");
    return a + b;
}

//c语言不支持函数重载
//complie error: Conflicting types for 'sum'
//int cSum (double a, int b)
//{
//    return a + b;
//}
