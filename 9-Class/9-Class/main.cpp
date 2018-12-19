//
//  main.cpp
//  9-Class
//
//  Created by wangjianlong on 2018/12/19.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#include <iostream>
#include "initTest.hpp"
#include "constructor.hpp"
#include "destructor.hpp"

using namespace std;




//全局区
Person g_person;//1调用构造函数Person() //成员变量初始化为0

Person g_person1();//函数声明
Person g_preseon2(10);//2构造函数Person(int age)


int main(int argc, const char * argv[]) {
   
//    int *p = mallocTest();
//    free(p);
//
//    int *p1 = newTest();
//    delete p1;
//
//    int *p2 = newTest1();
//    delete[] p2;
    
//    initTest();
    
    //栈空间申请内存
    Person p;//3.调用构造函数Person()
//    cout << p.getAge() << endl;
    
    //堆空间
    //还是需要加上(),这样可以对申请的person的空间清零
//    Person *p_p = new Person;
    
    //一旦自定义了构造函数,就必须用自定义中的构造函数来初始化对象
//    Person *p_p = new Person();
//    p_p->setAge(10);
//    cout << p_p->getAge() << endl;
    
    
//    Person *p_p1 = new Person(30);
//    cout << p_p1->getAge() << endl;
    
    //malloc 不会调用构造函数
//    Person *mallocP = (Person *)malloc(sizeof(Person));
//    cout << mallocP->getAge() << endl;
    
    
    Person person1();//函数声明
    Person person2(66);//4.构造函数Person(int age)
    
    Person *pp1 = new Person;//5.调用构造函数Person()
    Person *pp2 = new Person();//6.调用构造函数Person()
    Person *pp3 = new Person(688);//7.构造函数Person(int age)
    
    Student s;
    
    return 0;
}
