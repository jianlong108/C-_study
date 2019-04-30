//
//  10-NameSpace.cpp
//  GrammerOfCpp
//
//  Created by wangjianlong on 2019/4/29.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include "10-NameSpace.hpp"
#include <iostream>

using namespace std;

namespace JL {
    //声明全局变量
    int g_no;
    
    class Person{
    public:
        int age;
        void run(){
            cout << "JL person running" << g_no << endl;
        }
    };
    
}

namespace WJL {
    //声明全局变量
    int g_no;
    
    class Person{
    public:
        int age;
        void run(){
            cout << "WJL person running" << g_no << endl;
        }
    };
    
}

//命名空间可以嵌套
namespace jianlong {
    namespace wangjianlong {
        int g_no;
        class Person{
        public:
            int age;
            void run(){
                cout << "wangjianlong person running" << g_no << endl;
            }
        };
    }
}


void tenMain() {
    JL::g_no = 10;
    WJL::g_no = 20;
    
    JL::Person *p = new JL::Person();
    p->run();
    
    WJL::Person *p1 = new WJL::Person();
    p1->run();
    
    using namespace WJL;
    g_no = 30;
    Person *p3 = new Person();
    p3->run();
    
    using namespace jianlong;
    g_no = 40;
    Person *p4 = new Person();
    p4->run();
    
    wangjianlong:: g_no = 50;
    wangjianlong::Person *p5 = new wangjianlong::Person();
    p5->run();
    
}
