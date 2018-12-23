//
//  main.cpp
//  13-polymorphism
//
//  Created by Wangjianlong on 2018/12/23.
//  Copyright © 2018 JL.Com. All rights reserved.
//

#include <iostream>
#include "GoodStudent.hpp"

int main(int argc, const char * argv[]) {
    
    //父类指针指向子类对象 是安全的..但是子类继承必须是Public
    Person *p = new Student(100);
    
    //子类指针指向父类对象是不安全的..因为子类指针可以访问的内存,可能会超过真实的内存区域
//    Student *s = new Person(0,0);
    
    //Person::running() C++的静态性
    p->running();
    
    /*多态: 同一操作作用于不同的对象,可以有不同的解释,产生不同的执行结果
           在运行时,可以识别出真正的对象类型,调用对应子类的函数
     
     C++中的多态是通过虚函数来实现的
     virtual 来声明函数...只要父类声明了函数为虚函数,子类重写的父类的虚函数,不需要再次声明为虚函数
     */
    Person *p1 = new GoodStudent(10000);
    p1->running();
    
    //虚函数的声明在继承关系的哪一级中,就必须用哪一级来指向子类
    Student *s = new GoodStudent(1);
    s->running();
    
    return 0;
}
