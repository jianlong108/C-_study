//
//  main.cpp
//  Static
//
//  Created by Wangjianlong on 2019/9/8.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include <iostream>

using namespace std;

class Rocket {
private:
    Rocket() {
        
    }
    ~Rocket() {
        
    }
    static Rocket *g_instance;
public:
    static Rocket* shareInstance() {
        if (g_instance == nullptr) {
            g_instance = Rocket();
        }
        return g_instance;
    }
    
    static deleteShareInstance() {
        if (g_instance) {
            delete g_instance;
            g_instance = nullptr;
        }
    }
};

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

int Person::m_age = 1;
int g_id;
int main(int argc, const char * argv[]) {
    //    Person p;
    //    p.run();
    //    Person *pp = new Person();
    //    pp->run();
    //    Person::run();
    
    
    
    //    cout << p.m_age <<endl;
    //    Person::m_age = 3;
    //    cout << p.m_age <<endl;
    Person p1;
    p1.m_age = 4;
    p1.m_height = 5;
    g_id = 6;
    return 0;
}
