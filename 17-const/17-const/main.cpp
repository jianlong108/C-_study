//
//  main.cpp
//  17-const
//
//  Created by wangjianlong on 2018/12/24.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#include <iostream>
using namespace std;

/*
 const成员:被const修饰的成员变量、非静态成员函数
 */
class Car {
    
public:
    /*
     const成员变量
          必须初始化(类内部初始化)，可以在声明的时候直接初始化赋值
          非static的const成员变量还可以在初始化列表中初始化
     */
    const int wheelCount = 4;
    const int m_doors;
    int m_speed;
    static int color;
    Car():m_doors(4) {

    }
    
    static const int oil;
    //Member initializer 'oil' does not name a non-static data member or base class
//    Car():oil(100){
//
//    }
    
    /*
     const成员函数(非静态)
     > const关键字写在参数列表后面，函数的声明和实现都必须带const
     > 内部不能修改非static成员变量
     > 内部只能调用const成员函数、static成员函数
     > 非const成员函数可以调用const成员函数
     > const成员函数和非const成员函数构成重载
     > 非const对象(指针)优先调用非const成员函数
     > const对象(指针)只能调用const成员函数、static成员函数
     */
    void display() const ;
    void add() const {
        cout << "1+1 = " << 2 << endl;
    }
    
    void hello() {
        //非const成员函数可以调用const成员函数
        this -> display();
        cout << "say hello" <<endl;
    }
    
    void add () {
        cout << "add (int a,int b)" << endl;
    }
    
    static void say() {
        cout << "say()....." <<endl;
    }
    
    // const成员函数(非静态)
    // Static member function cannot have 'const' qualifier
//    static void description() const {
//
//    }
};

int Car::color = 0;

void Car::display() const
{
    //内部不能修改非static成员变量
    //Cannot assign to non-static data member within const member function 'display'
//    this->m_speed = 100;
    this -> color = 2;
    
    //内部只能调用const成员函数、static成员函数
    //this' argument to member function 'hello' has type 'const Car', but function is not marked const
//    this -> hello();
    this->add();
    this->say();
    
    cout << "display()" << endl;
}

int main(int argc, const char * argv[]) {
    
    Car *c = new Car();
    
    cout << c->wheelCount << endl;
    cout << c->m_doors << endl;
    c->display();
    
    //非const对象(指针)优先调用非const成员函数
    c->add();
    
    const Car *cc = new Car();
    cc->add();
    
    //const对象(指针)只能调用const成员函数、static成员函数
    //this' argument to member function 'hello' has type 'const Car', but function is not marked const
//    cc->hello();
    
    return 0;
}
