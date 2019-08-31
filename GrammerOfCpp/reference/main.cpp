//
//  main.cpp
//  reference
//
//  Created by Wangjianlong on 2019/8/27.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include <iostream>
#include "7-reference.hpp"

using namespace std;

//定义枚举
enum Season {
    spring = 1,
    summer = 2,
    fall = 3,
    winter = 4
};

void enumReference() {
    Season s = spring;
    Season &r_s = s;
    r_s = winter;
    cout << s <<endl;
}

//定义结构体
struct Student {
    int age;
    void run(){
        cout << "Student run" << endl;
    }
};

void structReference() {
    Student s = Student();
    Student &r_s = s;
    r_s.age = 10;
    cout << s.age <<endl;
}

void cPointer()
{
    int a = 10;
    int *p = &a;
    *p = 20;
    cout << a <<endl;
}

void referenceInt()
{
    int a = 10;
    int &p = a;
    p = 20;
    cout << a <<endl;
}

void pointerReference() {
    int a = 1;
    int *p_a = &a;
    int *&r_p = p_a;
    *r_p = 2;
    cout << a << endl;
}

void arrayReference() {
    int arr[] = {1,2,3};
//    int &r_arr[] = arr;
    int (&r_arr)[3] = arr;
    cout << "数组引用：" << r_arr[1] << endl;

}

void referenceCanChange() {
    
    int a = 10;
    int &r_a = a;
    int b = 11;
    r_a = b;
    cout << "a = " <<a <<endl;
    cout << "b = " << b <<endl;
    r_a = 20;
    cout << "a = " <<a <<endl;
    cout << "b = " << b <<endl;
    
}

class Person {
public:
    void study(){
        cout << "person study" << endl;
    }
};


void notSafePointer() {
//    Person s = Person();
//    Person *p_a = &s;
//    p_a->study();
//    cout << p_a << endl;
//    {
//        Student b = Student();
//        p_a = (Person *)&b;
//
//        Student *p_s = (Student *)p_a;
//        p_s->run();
//
//        delete p_a;
//    }
//    cout << p_a << endl;
//
//    p_a->study();
    
    Person s = Person();
    Person &r_s = s;
    r_s.study();
    
    Student b = Student();
    Student &r_b = b;
    r_s = (Person &)r_b;
    r_s.study();
}

//定义全局变量
int gA = 88;

//定义一个函数 返回一个指向 int的引用
int & changeG()
{
    return gA;
}

//int main(int argc, const char * argv[]) {
//
////    referenceMain();
////    referenceInt();
////    structReference();
////    notSafePointer();
////    pointerReference();
////    arrayReference();
//    //修改函数返回值
//    changeG() = 66;
//    cout << gA << endl;
//    
//    
//    return 0;
//}

//两种交换两个数的方式
void pSwap(int *a,int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void rSwap(int &a,int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
int main() {
    int sA = 10;
    int sB = 20;
    
    pSwap(&sA, &sB);
    cout << "sA = " << sA << endl;
    cout << "sB = "<< sB << endl;
    
    rSwap(sA, sB);
    cout << "sA = " << sA << endl;
    cout << "sB = "<< sB << endl;
}

void test()
{
    //    int a = 10;
    //    int &r_a;
    //    r_a = a;
}
