//
//  3-externC.h
//  GrammerOfCpp
//
//  Created by Wangjianlong on 2019/4/25.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#ifndef __externC_h
#define __externC_h

#include <stdio.h>

//int cSum (int a, int b);

//如果自己编写的C语言文件，既可以被c语言编译器中使用，又可以在c++编译器中使用
#ifdef __cplusplus
extern "C" {
#endif
    
    int cSum (int a, int b);
    
#ifdef __cplusplus
}
#endif

#endif /* __externC_h */
