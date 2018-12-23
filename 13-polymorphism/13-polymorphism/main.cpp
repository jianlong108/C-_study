//
//  main.cpp
//  13-polymorphism
//
//  Created by Wangjianlong on 2018/12/23.
//  Copyright © 2018 JL.Com. All rights reserved.
//

#include <iostream>
#include "Student.hpp"

int main(int argc, const char * argv[]) {
    
    //父类指针指向子类对象 是安全的..但是子类继承必须是Public
    Person *p = new Student(100);
    
    //子类指针指向父类对象是不安全的..因为子类指针可以访问的内存,可能会超过真实的内存区域
//    Student *s = new Person(0,0);
    
    //Person::running() C++的静态性
    p->running();
    return 0;
}
