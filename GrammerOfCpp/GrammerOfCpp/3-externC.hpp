//
//  externC.hpp
//  GrammerOfCpp
//
//  Created by Wangjianlong on 2019/4/25.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#ifndef externC_hpp
#define externC_hpp

#include <stdio.h>
/*
 由于C，C++的编译规则不同，在C,C++混合开发时，可能会经常出现以下操作：
 
 > C++在调用C语言API时，需要使用extern "C" 修饰C语言函数的声明
 
 >
 
 */


//函数实现分离时，要在头文件声明
extern "C" int sum (int a, int b);


void externCMain();

#endif /* externC_hpp */
