//
//  9-StructAndClass.cpp
//  GrammerOfCpp
//
//  Created by wangjianlong on 2019/4/28.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include "9-StructAndClass.hpp"
#include <iostream>

using namespace std;

/*
 C++中可以使用struct、class来定义一个类
 struct和class的区别
 struct的默认成员权限是public
 class的默认成员权限是private
 
 */

struct Animal {
    int age;
    Animal(){
        cout << "Animal()" << endl;
    }
    ~Animal(){
        cout << "~Animal()" << endl;
    }
};

class Person : Animal{
    //不写,默认是私有的.只有当前类可以访问
    float height;
//私有的.只有当前类可以访问
private:
    float weight;
    
//受保护的,只有当前类和子类可以访问
protected:
    char *name;
    
//对外公开,全部都可以访问
//构造函数和析构函数,必须为public
public:
    void think(){
        cout << "Person think()" << endl;
    }
    ~Person(){
        cout << "~Person()" << endl;
    }
};


//继承的时候,一般为public 继承.这样可以保持父类对成员(成员变量和成员函数)访问权限的控制...
//因为对属性的访问.继承的权限和自定义的权限,取最低值
class RichMan {
    
public:
    long money;
    Animal *pet;
    
    RichMan(){
        
        /*
         ERROR  malloc: *** error for object 0x7ffeefbff460: pointer being freed was not allocated
         a被分配到了栈空间。函数执行完就被释放
         */
//        Animal a;
//        this->pet = &a;
        
        this->pet = new Animal();
        cout << "RichMan()" << endl;
    }
    ~RichMan(){
        ////释放掉内部申请的堆空间内存
        delete this->pet;
        cout << "~RichMan()" << endl;
    }
};

void nineMain ()
{
    //a被分配在栈空间，不需要开发者管理内存
    //成员变量没有被清零
    Animal a;
    cout << &a << endl << a.age << endl;
    
    //p被分配在栈空间，不需要开发者管理内存
    Person p;
    //class的默认成员权限是private,所以不能直接访问
    cout << &p /*<< a.height*/ << endl;
    
    RichMan m;
}

int * mallocTest()
{
    //申请4个字节的堆空间
    int *p = (int *)malloc(sizeof(int));
    cout << "mallocTest()" << *p << endl;
    *p = 10;
    
    //释放申请的内存,一一对应
    //    free(p);
    return p;
}

int * newTest()
{
    //申请4个字节的堆空间
    int *p = new int;
    //http://www.cppblog.com/luxuejuncarl/archive/2007/03/02/19137.html
    //对起始地址为p,连续sizeof(int)的空间的每一位内存用1覆盖
    memset(p, 1, sizeof(int));
    cout << "newTest()" << *p << endl;
    return p;
}

int * newTest1()
{
    //申请10 x 4 个字节的堆空间
    int *p = new int[10];
    
    cout << "newTest1()" << p[1] << endl;
    return p;
}

void initTest()
{
    int *p = (int *)malloc(sizeof(int));
    *p = 888;
    free(p);
    
    //没有初始化,有可能会是888
    int *p1 = new int;
    cout << *p1 << endl;
    delete p1;
    
    //初始化为0
    int *p2 = new int();
    cout << *p2 << endl;
    delete p2;
    
    //初始化为5
    int *p3 = new int(5);
    cout << *p3 << endl;
    delete p3;
    
    //数组元素未被初始化,首元素有可能为0
    int *p4 = new int[3];
    cout << p4[0] << endl;
    delete[] p4;
    
    //3个元素均被初始化为0
    int *p5 = new int[3]();
    cout << p5[0] << endl;
    delete[] p5;
    
    //3个元素均被初始化为0
    int *p6 = new int[3]{};
    cout << p6[0] << endl;
    delete[] p6;
    
    //首元素被初始化为6 其余元素为0
    int *p7 = new int[3]{6};
    cout << p7[0] << endl;
    delete[] p7;
}
