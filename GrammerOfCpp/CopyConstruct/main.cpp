//
//  main.cpp
//  CopyConstruct
//
//  Created by Wangjianlong on 2019/9/8.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include <iostream>
using namespace std;

/*
class Producte {
public:
    int m_id;
    char *m_name;
    void copyName(const char *name) {
        if (name == nullptr) {
            return;
        }
        this->m_name = (char *) new char[strlen(name)+1]{};
        strcpy(this->m_name, name);
    }
    Producte(int id = 0,char *name = nullptr){
        m_id = id;
        copyName(name);
    }
    Producte(const Producte &p):m_id(p.m_id){
        copyName(p.m_name);
    }
    ~Producte(){
        if (m_name != nullptr) {
            delete [] m_name;
            m_name = nullptr;
        }
    }
};



class Car : public Producte {
public:
    int m_price;
    
    explicit Car(int price = 0):m_price(price){
        Producte::m_id = 0;
        cout << "Car(int price = 0)" << endl;
    };
    Car(const Car &car):Producte(car),m_price(car.m_price) {
        cout << "Car(const Car &car)" << endl;
    }
};
void test(Car c) {
    
}

Car test1() {
    Car p = Car(1);
    return p;
}
 
 */

class Person {
    int m_age = 1;
};

class Point {
    friend Point pointAdd(const Point &, const Point &);
    int m_x;
    int m_y;
public:
    Point(int x, int y):m_x(x),m_y(y) {}
//    void test(){
//        Math::m_canCalz
//    }
private:
    class Math {
        bool m_canCal;
        void calPoint(const Point &p1, const Point &p2) {
            cout << p1.m_x + p2.m_x << endl;
            cout << p1.m_y + p2.m_y << endl;
        }
    };
};

Point pointAdd(const Point &p1, const Point &p2) {
    int x = p1.m_x + p2.m_x;
    int y = p1.m_y + p2.m_y;
    return Point(x,y);
}

void test() {
    int a;
    class Math {
        int m_x;
        void cal(){
        }
    };
}

int main(int argc, const char * argv[]) {
    Math::cal();
    /*
     CopyConstruct`main:
     0x100000f90 <+0>:  pushq  %rbp
     0x100000f91 <+1>:  movq   %rsp, %rbp
     0x100000f94 <+4>:  xorl   %eax, %eax
     0x100000f96 <+6>:  movl   $0x0, -0x4(%rbp)
     0x100000f9d <+13>: movl   %edi, -0x8(%rbp)
     0x100000fa0 <+16>: movq   %rsi, -0x10(%rbp)
     ->  0x100000fa4 <+20>: movl   $0x1, -0x1c(%rbp)
     0x100000fab <+27>: popq   %rbp
     0x100000fac <+28>: retq
     */
    Person p;
    int a = 1;
//    Car c1 = 10;
//    test(c1);
//
//    Car c2 = test1();
//
//    Car c3(30);
//    c3 = 20;
//    c3 = test1();
//
//    Car car1(10);
//    Car car2(car1);
//    Car car3 = car2;
//    Car car4;
//    car4 = car3;
    return 0;
}
