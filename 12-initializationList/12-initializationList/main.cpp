//
//  main.cpp
//  12-initializationList
//
//  Created by wangjianlong on 2018/12/22.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#include <iostream>
#include "Person.hpp"
#include "Student.hpp"
#include "GoodStudent.hpp"

int main(int argc, const char * argv[]) {
    
//    Person *p0 = new Person();
//    Person *p = new Person(10,20);
    
    //子类的构造函数默认会调用父类的无参构造函数
//    Student *s = new Student();
    //如果子类的构造函数显式地调用了父类的有参构造函数,就不会再去默认调用父类的无参构造函数
    //如果父类缺少无参构造函数,子类的构造函数必须显式调用父类的有参构造函数
    GoodStudent *gs = new GoodStudent(888);
    
    return 0;
}
