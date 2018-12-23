//
//  Object.hpp
//  14-virtualFunc
//
//  Created by Wangjianlong on 2018/12/23.
//  Copyright © 2018 JL.Com. All rights reserved.
//

#ifndef Object_hpp
#define Object_hpp

#include <stdio.h>

//只要含有一个纯虚函数的类称为 抽象类..
//抽象类可以包含非纯虚函数
class Object {
    
public:
    //纯虚函数: 没有函数体且初始化为0的虚函数,称为纯虚函数
    //一般用来定义接口.类似oc中的protocol
    virtual void init() = 0;
    virtual void dealloc() = 0;
    virtual void say(){
        
    }
};

#endif /* Object_hpp */
