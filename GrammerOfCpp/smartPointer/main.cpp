//
//  main.cpp
//  smartPointer
//
//  Created by Wangjianlong on 2019/8/31.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include <iostream>
using namespace std;

//class Person {
//    int m_age;
//public:
//    Person() {
//        std::cout << "Person()" << std::endl;
//    }
//    Person(int age):m_age(age) {
//        std::cout << "Person(int age)" << std::endl;
//    };
//    ~Person() {
//        std::cout << "~Person()" << std::endl;
//    }
//    int getAge() {
//        return m_age;
//    }
//};

template <typename T>
class SmartPointer {
    T *m_obj;
    
public:
    SmartPointer(T *obj) :m_obj(obj) {}
    ~SmartPointer() {
        if (m_obj == nullptr) return;
        
        delete m_obj;
    }
    
    T *operator->() {
        return m_obj;
    }
};
void doublefree();


class Person;

class Car {
public:
    weak_ptr<Person> m_person;
    Car() {
        cout << "Car()" << endl;
    }
    ~Car() {
        cout << "~Car()" << endl;
    }
};

//class Car {
//public:
//    shared_ptr<Person> m_person;
//    Car() {
//        cout << "Car()" << endl;
//    }
//    ~Car() {
//        cout << "~Car()" << endl;
//    }
//};

class Person {
public:
    shared_ptr<Car> m_car;
    Person() {
        cout << "Person()" << endl;
    }
    ~Person() {
        cout << "~Person()" << endl;
    }
};

int main(int argc, const char * argv[]) {
//    Person *p = new Person(10);
//    std::cout << p->getAge() << std::endl;
//    delete p;
//    p = nullptr;
    
//    std::auto_ptr<Person> p(new Person(11));
//    std::cout << p->getAge() << std::endl;
    
//    std::auto_ptr<Person> pArr(new Person[10]);
//    std::shared_ptr<Person> shar_p(new Person[3],[](Person *p){
//        delete []p;
//    });
//    int *p = new int[10];
//    for (int i = 0; i<10; i++) {
//        *p ++ = i;
//    };
//    std::cout << *p + 3 << std::endl;
    
    
//    shared_ptr<Person[]> persons(new Person[3]{});
//    SmartPointer<Person> p(new Person(10));
//    p->getAge();
//    {
//        shared_ptr<Person> p(new Person(9));
//        cout << "p.use_count = " << p.use_count() << endl;
//        {
//            shared_ptr<Person> p1(p);
//            cout << "p.use_count = " << p.use_count() << endl;
//        }
//        cout << "p1 析构" << endl;
//        cout << "p.use_count = " << p.use_count() << endl;
//    }
//    cout << "p 析构" << endl;
//
    
//    doublefree();
//    {
//        //这时候 两个对象都不会被释放。产生了循环引用
//        shared_ptr<Person> person(new Person());
//        shared_ptr<Car> car(new Car());
//
//        person->m_car = car;
//        car->m_person = person;
//    }
//    shared_ptr<Person> person(new Person());
        unique_ptr<Person> person(new Person());
    {
        unique_ptr<Person> u_p = move(person);
//        unique_ptr<Person> u_p2(person);
    }
    
    
    return 0;
}

void doublefree()
{
//    shared_ptr<Person> p(new Person());
    Person *p = new Person();
    {
        shared_ptr<Person> p1(p);
    }
    
    {
        shared_ptr<Person> p1(p);
    }
}
