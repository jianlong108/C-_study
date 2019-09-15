//
//  main.cpp
//  constructor
//
//  Created by Wangjianlong on 2019/9/1.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include <iostream>

using namespace std;

class Car {
    
public:
    int m_price;
    Car() {
        cout << "Car()" << endl;
    }
    ~Car(){
        cout << "~ Car()" << endl;
    }
};

class Person {
    
public:
    int m_age;
    Car *m_car;
    Person() {
        cout << "person()" << endl;
    }
    ~Person(){
        cout << "~ person()" << endl;
        if (m_car) {
            delete m_car;
        }
    }
};

int main(int argc, const char * argv[]) {
    Person p0;
    cout << p0.m_age << endl;
//    Person *p_s = (Person *)malloc(sizeof(Person));
//    cout << p_s->m_age << endl;
    
    return 0;
}
