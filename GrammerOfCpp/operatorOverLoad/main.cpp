//
//  main.cpp
//  operatorOverLoad
//
//  Created by Wangjianlong on 2019/9/11.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include <iostream>

using namespace std;


        
class Person {
    int m_age;
public:
    Person &operator=(const Person &p) {
        this->m_age = p.m_age;
        return *this;
    }
};
    
class Student : public Person {
    int m_score;
public:
    Student &operator=(const Student &s) {
        Person::operator=(s);
        this->m_score = s.m_score;
        return *this;
    }
};

//单例模式补充
class Rocket {
private:
    Rocket() {
        
    }
    ~Rocket() {
        
    }
    void operator=(const Rocket &){}
    static Rocket *g_instance;
public:
    static Rocket* shareInstance() {
        if (g_instance == nullptr) {
            g_instance = new Rocket();
        }
        return g_instance;
    }
    
    static void deleteShareInstance() {
        if (g_instance) {
            delete g_instance;
            g_instance = nullptr;
        }
    }
};

//Point operator+(const Point &p1, const Point &p2) {
//    int x = p1.m_x + p2.m_x;
//    int y = p1.m_y + p2.m_y;
//    return Point(x,y);
//}
    
class Point {
    //    friend Point operator+(const Point &, const Point &);
    friend ostream &operator<<(ostream &,const Point &);
    friend istream &operator>>(istream &, Point &);
    int m_x;
    int m_y;
    public:
    Point(int x = 0, int y = 0):m_x(x),m_y(y){};
    void display() {
        cout << "display:" << "(" << m_x << "," << m_y << ")" << endl;
    }

    const Point operator+(const Point &p) const {
//        this->m_x += p.m_x;
//        this->m_y += p.m_y;
//        return *this;
        return Point(m_x+p.m_x, m_y+p.m_y);
    }
    const Point operator-(const Point &p) const {
        return Point(m_x-p.m_x, m_y-p.m_y);
    }
    Point& operator<<(const Point &p) {
        cout << "(" << p.m_x << "," << p.m_y << ")" << endl;
        return *this;
    }

    Point & operator=(const Point &p) {
        this->m_y = p.m_y;
        return *this;
    }
        
    const Point operator++(int) {
        Point oldP = Point(m_x,m_y);
        m_x++;
        m_y++;
        return oldP;
    }
    Point & operator++() {
        ++m_x;
        ++m_y;
        return *this;
    }
};

ostream &operator<<(ostream &JLOut,const Point &p) {
    JLOut << "(" << p.m_x << "," << p.m_y << ")";
    return JLOut;
}

istream &operator>>(istream &JLIn, Point &p) {
    JLIn >> p.m_x;
    JLIn >> p.m_y;
    return JLIn;
}

int main(int argc, const char * argv[]) {
//    Point p1 = Point(2,3);
//    Point p2 = Point(4,5);
//    cout << p1 << p2 << endl;
//    cout << "赋值前=========" << endl;
//    p1 = p2;
//    cout << p1 << p2 << endl;
//    p1 + p2 + Point(1,1);
////    p1+p2 = Point(2,3);
//    p1.display();
//
//    Point p3 = p1 + p2 + Point(1,1);
//    p3.display();
//    Point p4 = p3 - p1;
//    p4.display();
        
        Point p1 = Point(1,1);
        p1++;
        ++p1 = Point(99,99);
        p1.display();
        Point p2 = p1++ + Point(1,1);
        p2.display();
    
//        int a = 1;
//        ++a = 3;
//        int b = a++ + 4;
//        a++ = 4;
        
    return 0;
}
