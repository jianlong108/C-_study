//
//  main.cpp
//  template
//
//  Created by Wangjianlong on 2019/9/13.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include <iostream>

using namespace std;

template <class T>
void swapValue(T &t1, T &t2) {
    T tmp = t1;
    t1 = t2;
    t2 = tmp;
}

template <class T1,class T2>
void display(T1 &t1, T2 &t2) {
    cout << t1 << endl;
    cout << t2 << endl;
}
class Point {
    friend ostream &operator<<(ostream &,const Point &);
    int m_x;
    int m_y;
public:
    Point(int x = 0, int y = 0):m_x(x),m_y(y){};
    void display() {
        cout << "display:" << "(" << m_x << "," << m_y << ")" << endl;
    }
    
    const Point operator+(const Point &p) const {
        return Point(m_x+p.m_x, m_y+p.m_y);
    }
    
};
ostream &operator<<(ostream &JLout,const Point &p) {
    return JLout << "(" << p.m_x << "," << p.m_y << ")";
}

//int add (int a, int b) {
//    return a+b;
//}
//double add (double a, double b) {
//    return a+b;
//}

template <typename T>
T add(T t1, T t2) {
    return t1 + t2;
}

class Person {
public:
    virtual void run() {}
    
};
class Student : public Person {
    void run() {

    }
};
class Car {
    
};
void func(int a) {
    cout << "void func(int) :" << a << endl;
}
void func(int *a) {
    cout << "void func(int *) :" << a << endl;
}
    
int main(int argc, const char * argv[]) {
    
    cout << add(1, 2) << endl;
    cout << add(1.2, 2.3) << endl;
    
    
    cout << add<int>(1, 2) << endl;
    cout << add<double>(1.2, 2.3) << endl;
    cout << add<Point>(Point(1,2),Point(2,3)) << endl;
//    int c = 10;
//    float f = 20.5;
    //10 20.5
//    display<int, float>(c,f);
//    const Point &p1 = Point();
//    Point &p2 = const_cast<Point &>(p1);
//
//    const Point *p = new Point();
//    Point *pp = const_cast<Point *>(p);
    
    Person *p1 = new Person();
    Person *p2 = new Student();
    Student *s1 = reinterpret_cast<Student *>(p1);
    Student *s2 = reinterpret_cast<Student *>(p2);
    Car *c = reinterpret_cast<Car *>(p1);
    int a = 100;
    int *pa = reinterpret_cast<int *>(a);
//    int b = reinterpret_cast<int>(pa);
    decltype(a) b = a;
    
    cout << s1 << endl;
    cout << s2 << endl;
    cout << c << endl;
    cout << pa << endl;
    
    int arr[] = {1,2,3,4};
    for (int a : arr) {
        cout << a << endl;
    }
    
    int array[]{1,2,3,4};
    
    func(0);
    func(nullptr);
//    func(NULL);
    
    return 0;
}
