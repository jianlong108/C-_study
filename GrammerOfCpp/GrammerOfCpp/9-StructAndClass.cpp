//
//  9-StructAndClass.cpp
//  GrammerOfCpp
//
//  Created by wangjianlong on 2019/4/28.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include "9-StructAndClass.hpp"
#include <iostream>

using namespace std;

/*
 C++中可以使用struct、class来定义一个类
 struct和class的区别
 struct的默认成员权限是public
 class的默认成员权限是private
 
 */

struct Animal {
    int age;
    Animal(){
        cout << "Animal()" << endl;
    }
    ~Animal(){
        cout << "~Animal()" << endl;
    }
};

class Person : Animal{
    float height;
    
    //构造函数和析构函数,必须为public
public:
    void think(){
        cout << "Person think()" << endl;
    }
    ~Person(){
        cout << "~Person()" << endl;
    }
};

class RichMan {
    
public:
    long money;
    Animal *pet;
    
    RichMan(){
        
        /*
         ERROR  malloc: *** error for object 0x7ffeefbff460: pointer being freed was not allocated
         a被分配到了栈空间。函数执行完就被释放
         */
//        Animal a;
//        this->pet = &a;
        
        this->pet = new Animal();
        cout << "RichMan()" << endl;
    }
    ~RichMan(){
        delete this->pet;
        cout << "~RichMan()" << endl;
    }
};

void nineMain ()
{
    //a被分配在栈空间，不需要开发者管理内存
    //成员变量没有被清零
    Animal a;
    cout << &a << endl << a.age << endl;
    
    //p被分配在栈空间，不需要开发者管理内存
    Person p;
    //class的默认成员权限是private,所以不能直接访问
    cout << &p /*<< a.height*/ << endl;
    
    RichMan m;
}
