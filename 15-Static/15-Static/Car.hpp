//
//  Car.hpp
//  15-Static
//
//  Created by wangjianlong on 2018/12/24.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#ifndef Car_hpp
#define Car_hpp

#include <stdio.h>


/*
 🍎静态成员变量
 1.静态成员变量存储在数据段(全局区,类似于全局变量),整个运行过程中只有一份内存
 2.对比全局变量,它可以设定访问权限(private,protect,public),达到局部共享的目的
 3.必须初始化.必须在类外面初始化,初始化是不能带static,如果类的声明实现分离,需要在实现中初始化
 
 🍎静态成员函数
 1.内部不能使用this指针(this指针,代表当前访问对象.因为内存区域的不同...this指针只能用在非静态成员函数内部)
 2. 不能是虚函数
 3. 静态成员函数只能访问静态成员.但是非静态成员函数可以访问静态成员
 4. 构造函数和析构函数,不能是静态的
 5. 当声明和实现分离时,不能用static 声明
 */

class Object{
public:
    static int ms_reference_count;
    
    //静态成员函数
    static int getReferenceCount()
    {
        return ms_reference_count;
    }
    
    //'virtual' can only appear on non-static member functions
    //虚函数不能被static修饰
//    static virtual int getAge(){
//        return 0;
//    }
};
//需要在类外面,使用域访问来初始化
int Object::ms_reference_count = 0;



class Car {
    //被static修饰的成员变量/函数 == 静态成员
private:
    static int ms_existing_count;
    
public:
    static int getExistingCount();
    
    static int ms_price;
    
    Car();
    ~Car();
};

#endif /* Car_hpp */
