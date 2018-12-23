//
//  main.cpp
//  14-virtualFunc
//
//  Created by Wangjianlong on 2018/12/23.
//  Copyright © 2018 JL.Com. All rights reserved.
//

#include <iostream>
#include "Student.hpp"

#include "Object.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    Person *p = new Student(100);
    p->running();
    //子类没有实现的方法,自动会调用父类的方法
    p->studying();
    
    delete p;
    
    //Allocating an object of abstract class type 'Object'
//    Object *o = new Object();
    
    return 0;
}
