//
//  6-pragmaOnce.hpp
//  GrammerOfCpp
//
//  Created by Wangjianlong on 2019/4/25.
//  Copyright © 2019 JL.Com. All rights reserved.
//

/*
 我们经常使用#ifndef #define #endif 来防止头文件的内容被重复包含
 
 #pragma once 可以防止整个文件的内容被重复包含
 
 区别:
 >#ifndef #define #endif 受C/C++标准的支持,不受编译器的任何限制
 >有些编译器不支持#pragma once (较老编译器不支持,如GCC3.4版本之前),兼容性不好
 > #ifndef #define #endif 可以针对一个文件中的部分代码,而后者只能针对整个文件
 */



//#ifndef __pragmaOnce_hpp
//#define __pragmaOnce_hpp

//#include <stdio.h>

//#endif /* __pragmaOnce_hpp */

#pragma once

#include <stdio.h>
