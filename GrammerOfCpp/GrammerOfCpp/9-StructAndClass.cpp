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

/*
 this是指向当前对象的指针
 
 对象在调用成员函数的时候，会自动传入当前对象的内存地址
 
 可以利用this.m_age来访问成员变量么?
 答：不可以，因为this是指针，必须用this->m_age
 
 */

struct Animal {
    int age;
    /*
     构造函数(也叫构造器)，在对象创建的时候自动调用，一般用于完成对象的初始化工作
     ◼特点 函数名与类同名，无返回值(void都不能写)，可以有参数，可以重载，可以有多个构造函数
            一旦自定义了构造函数，必须用其中一个自定义的构造函数来初始化对象
     ◼注意 通过malloc分配的对象不会调用构造函数
     */
    Animal(){
        cout << "Animal()" << endl;
    }
    Animal(int age)
    {
        this->age = age;
        cout << "Animal(int age)" << endl;
    }
    
    /*
     析构函数(也叫析构器)，在对象销毁的时候自动调用，一般用于完成对象的清理工作
     ◼特点
     函数名以~开头，与类同名，无返回值(void都不能写)，无参，不可以重载，有且只有一个析构函数
     ◼注意
     通过malloc分配的对象free的时候不会调用构造函数
     ◼ 构造函数、析构函数要声明为public，才能被外界正常使用
     
     */
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
    
    //成员变量私有化，提供公共的getter和setter给外界去访问成员变量
    int getHeight()
    {
        return this->height;
    }
    
    void setHeight(int height)
    {
        this->height = height;
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

/*
 在程序运行过程，为了能够自由控制内存的生命周期、大小，会经常使用堆空间的内存
  堆空间的申请\释放
  malloc \ free
  new \ delete
  new [] \ delete []
 ◼注意  申请堆空间成功后，会返回那一段内存空间的地址
       申请和释放必须是1对1的关系，不然可能会存在内存泄露
 ◼ 现在的很多高级编程语言不需要开发人员去管理内存(比如Java)，屏蔽了很多内存细节，利弊同时存在
 */


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
    //memset函数是将较大的数据结构(比如对象、数组等)内存清零的比较快的方法
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
    //*p 没有初始化
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


/*
 对象的内存可以存在于3种地方
 > 全局区(数据段):全局变量
 > 栈空间:函数里面的局部变量
 > 堆空间:动态申请内存(malloc、new等)
 */

//全局区
Animal g_a; //调用Animal()，成员变量初始化为0
Animal g_a1(); //这是一个函数声明，函数名叫g_a1，返回值类型是Animal，无参
Animal g_a2(6); //调用Animal(int age)

void callContructFunc()
{
    //栈空间
    Animal a; //调用Animal()，成员变量不会被初始化
    Animal a1(); //这是一个函数声明，函数名叫a1，返回值类型是Animal，无参
    Animal a2(4); //调用Animal(int age)
    
    //堆空间
    Animal *a3 = new Animal(); //调用Animal() 成员变量被初始化为0
    Animal *a4 = new Animal(5); //调用Animal(int age) 成员变量被初始化为5
    Animal *a5 = new Animal; //调用Animal() 成员变量不会被初始化
    
    Animal *a6 = new Animal[3](); //3个Animal对象均被初始化为0
    Animal *a7 = new Animal[3]{}; //3个Animal对象均被初始化为0
}
