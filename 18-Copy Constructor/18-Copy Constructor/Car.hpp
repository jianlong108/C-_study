//
//  Car.hpp
//  18-Copy Constructor
//
//  Created by wangjianlong on 2018/12/24.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#ifndef Car_hpp
#define Car_hpp

#include <stdio.h>
#include <iostream>

class Car {
    /*
    引用类型成员变量必须初始化(不考虑static情况)
    在声明的时候直接初始化
    通过初始化列表初始化
    */
    //在声明的时候直接初始化
    int &r_speed = m_speed;
public:
    int m_speed;
    Car();
    ~Car();
    /*
     拷贝构造函数是构造函数的一种
     > 当利用已存在的对象创建一个新对象时(类似于拷贝)，就会调用新对象的拷贝构造函数进行初始化
     > 拷贝构造函数的格式是固定的，接收一个const引用作为参数
     */
    Car(const Car &car);
};

#endif /* Car_hpp */
