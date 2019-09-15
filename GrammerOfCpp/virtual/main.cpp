//
//  main.cpp
//  virtual
//
//  Created by Wangjianlong on 2019/9/4.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include <iostream>
using namespace std;

class Person {
public:
    static int m_age;
    int m_height;
    static void run() {
        cout << "Person run()" << endl;
    }
    void study() {
        run();
        cout << "Person study()" << endl;
    }
};

int main(int argc, const char * argv[]) {
//    cout << p1.m_age << endl;
//
//    pp->m_age = 5;
//    cout << pp->m_age << endl;
//    GoodBoy gb;
//    gb.m_age = 1;
//    gb.Worker::m_age = 0;
//    gb.Person::m_age = 2;
    return 0;
}

class Worker : virtual public Person {
public:
    int m_salary;
};

class Student : virtual public Person {
public:
    int m_score;
};

class Undergraduate : public Student,public Worker {
public:
    int m_grade;
};
//int main(int argc, const char * argv[]) {
//    GoodBoy gb;
//    gb.study();
//    gb.Worker::study();
//    gb.Person::study();
//    Dog ani;
    
//    study(new Person());
//    Person *p = new Student();
//    study(p);
//    delete p;
//    study(new Worker());
//    return 0;
//}

/*
class Student : public Person{
public:
    void study(){
        Person::study();
        cout << "Student ::study()" <<endl;
    }
    void run(){
        cout << "Student :: run()" <<endl;
    }
    ~Student() {
        cout << "~Student" <<endl;
    }
};
class Worker : public Person{
public:
    void study(){
        cout << "Worker :: study()" <<endl;
    }
    void run(){
        cout << "Worker :: run()" <<endl;
    }
    ~Worker() {
        cout << "~Worker" <<endl;
    }
};

void study(Person *p) {
    p->study();
    p->run();
}

class Animal {
    int m_age = 0;
    
    virtual void run() = 0;
    virtual void speak()= 0;
};

class Dog : Animal {
    void speak() {
        cout << "Dog speak()" << endl;
    }
};

 */
