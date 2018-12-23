//
//  Person.hpp
//  12-initializationList
//
//  Created by wangjianlong on 2018/12/22.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Person {
    int m_age;
    float m_height;
    
public:
//    Person(){
//        this->m_age = 0;
//        this->m_height = 0;
//        cout << "Person()" << endl;
//    }
    //初始化-1
//    Person(int age,int height){
//
//        this->m_age = age;
//        this->m_height = height;
//        cout << "Person(int age,int height)" << endl;
//    }
//***************************************************************//
    //初始化列表 初始化-2
    /*
     初始化列表是一种便捷的初始化成员变量的方式.
     只有在构造函数中
     不能和 初始化-1 同时存在 ERROR:Constructor cannot be redeclared
     初始化成员变量的变化只跟成员变量内存排布有关
     
     */
//*******************************************************************//
    //age =10 height =20
//    Person(int age,int height):m_age(age),m_height(height){
//        cout << "age =" << this->m_age << endl;
//        cout << "height =" << this->m_height << endl;
//    }
    
    //age =1 height =2
//    Person(int age,int height):m_age(1),m_height(2){
//        cout << "age =" << this->m_age << endl;
//        cout << "height =" << this->m_height << endl;
//    }
    
    //age =20 height =10
//    Person(int age,int height):m_age(height),m_height(age){
//        cout << "age =" << this->m_age << endl;
//        cout << "height =" << this->m_height << endl;
//    }
    
    //age =20 height =10  初始化顺序只跟内存拍部有关
//    Person(int age,int height):m_height(age),m_age(height){
//        cout << "age =" << this->m_age << endl;
//        cout << "height =" << this->m_height << endl;
//    }
    
    //标准的初始化
    //在调用Person()时,去调用另一个初始化方法Person(int age, int height)
//    Person():Person(1,1){};
//    Person(int age, int height):m_age(age),m_height(height){
//        cout << "age =" << this->m_age << endl;
//        cout << "height =" << this->m_height << endl;
//    };
    
    //默认参数只能写在声明中
//    Person(int age = 1, float height = 0.8);
    Person(int age, float height);
};

#endif /* Person_hpp */
