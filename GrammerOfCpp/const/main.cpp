//
//  main.cpp
//  Const
//
//  Created by Wangjianlong on 2019/9/8.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include <iostream>

using namespace std;

class Person {
public:
    int m_age = 1;
    int &r_age;
    Person():r_age(m_age){}
    static int m_height;
    int m_id = 1;
    void think() {
        
    }
    static void run() {
        cout << "Person run()" << endl;
    }
    void study() const {
        cout << "Person study() const" << endl;
    }
    
    void study() {
        cout << "Person study()" << endl;
    }
};

int Person::m_height = 1;

int main(int argc, const char * argv[]) {
    Person p;
    p.study();
    const Person p1;
    p1.study();
    return 0;
}
