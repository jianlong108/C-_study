//
//  main.cpp
//  class
//
//  Created by Wangjianlong on 2019/9/1.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include <iostream>

using namespace std;

struct Car {
    int wheel;
    void run() {
        cout << "run" << endl;
    }
};



//Person g_p;
//void location() {
//    //c 存放在栈空间
//    Car c;
//    c.run();
//    // g_p 存放在全局区
//    g_p.study();
//
//    // p_c 存储的地址 属于堆空间
//    Car *p_c = new Car();
//    p_c ->run();
//}

//int getID() {
//    return 12;
//}

class Person {
    int m_age;
public:
    Person(int age):m_age(age) {
        cout << "Person(int age):m_age(age)" << endl;
    }
    int getAge() {
        return m_age;
    }
    ~Person() {
        cout << "~Person()" << endl;
    }
};
class Student : public Person{
public:
    int m_id;
    int m_age;
    int m_height;
    Student(int id = 1 , int age = 3 ):Person(2),m_id(id),m_age(age){
        cout << "Student(int id = 1 , int age = 3 ):Person(2),m_id(id),m_age(age)" << endl;
    };
    ~Student() {
        cout << "~Student()" << endl;
    }
    void display() {
        cout << "m_id = " << m_id << "\nm_age = " << m_age << "\nm_height = " << m_height << endl;
    }
};


int main(int argc, const char * argv[]) {
    
    Person *p = new Student();
    p->getAge();
    
    Student *s = (Student *)new Person(1);
    s->display();
    
    return 0;
}
