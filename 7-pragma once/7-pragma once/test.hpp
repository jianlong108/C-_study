//
//  test.hpp
//  7-pragma once
//
//  Created by Wangjianlong on 2018/11/29.
//  Copyright © 2018 JL.Com. All rights reserved.
//

/*
 我们经常使用#ifndef #define #endif 来防止头文件的内容被重复包含
 
 #pragma once 可以防止整个文件的内容被重复包含
 
 区别:
 >#ifndef #define #endif 受C/C++标准的支持,不受编译器的任何限制
 >有些编译器不支持#pragma once (较老编译器不支持,如GCC3.4版本之前),兼容性不好
 > #ifndef #define #endif 可以针对一个文件中的部分代码,而后者只能针对整个文件
 */

#ifndef test_hpp
#define test_hpp

#include <stdio.h>

void test();

#endif /* test_hpp */
