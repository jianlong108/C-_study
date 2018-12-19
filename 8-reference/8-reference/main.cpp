//
//  main.cpp
//  8-reference
//
//  Created by Wangjianlong on 2018/12/1.
//  Copyright © 2018 JL.Com. All rights reserved.
//

#include <iostream>
using namespace std;

/*
 在C语言中,使用指针(pointer)可以间接获取,修改某个变量的值
 在C++中,使用引用(Reference)可以达到和指针类似的功能
 
 > 引用相当于变量的别名(基本数据类型,枚举,结构体,类,指针,数组等,都可以有引用)
 > 对引用做计算,就是对引用所指向的变量做计算
 > 在定义的时候就必须初始化,一旦指向了某个变量,就不可以再改变.从一而终
 > 可以用一个引用初始化另一个引用,相当于变量有多个别名
 > 不存在(引用的引用,指向引用的引用,引用数组)
 
 引用存在的价值:
 比指针更安全,函数返回值可以被赋值.
 
 
 引用被const修饰,这样就无法通过引用修改数据了,可以称为常引用
 const必须写在&符号的左边,才能算是常引用
 
 const引用的特点:
 >可以指向临时数据(常量,表达式,函数返回值等)
 >可以指向不同类型的数据
 >作为函数参数时,(此规则也适用于const指针)
   可以接受const和非const实参(非const引用,只能接受非const实参)
   可以跟非const引用构成重载
 
 
 当常引用指向了不同类型的数据时,会产生临时变量,即引用指向的并不是初始变量
 
 
 引用的本质就是指针,只是编译器削弱了它的功能,所以引用就是弱化了的指针
 一个引用占用的内存是一个指针的大小
 */

enum Season{
    spring,
    summer,
    fall,
    winter
};

struct Student {
    int age;
};

int g_a = 88;
int & changeG()
{
    return g_a;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int age = 10;
    
    //定义指针
    int *pAge = &age;
    
    *pAge = 20;
    cout << age << endl;
    
    //定义引用
    int &rAge = age;
    rAge = 30;
    cout << age << endl;
    
    //为枚举定义引用
    Season season;
    
    Season &rSeason = season;
    rSeason = winter;
    cout << season << endl;
    
    //为结构体定义引用
    Student stu;
    Student &rStu = stu;
    rStu.age = 10;
    
    cout << stu.age << endl;
    
    //为指针定义引用
    int height = 100;
    int width = 200;
    cout << "height 地址 = "<< &height <<endl;
    cout << "width 地址 = "<< &width <<endl;
    
    int *a = &height;
    int *b = &width;
    int *&rA = a;
    //指针a也指向了width.
    rA = b;
    
    cout << "a  = "<< a <<endl;
    cout << "b  = "<< b <<endl;
    cout << "rA  = "<< rA <<endl;
    //此时修改a指向的变量的值,相当于修改width的值
//    *a = 300;
//    cout << "height = " << height << endl;
//    cout << "width = " << width << endl;
    
    //此时相当于修改height
    *a = 400;
    cout << "height = " << height << endl;
    cout << "width = " << width << endl;
    
    
    //为数组定义引用
    int array[] = {1,2,3};
    int (&rArray)[3] = array;
    cout << rArray[1] << endl;
    
//    int *pA[4];//pA是数组,里面放着4个int *的指针
//    int (*pB)[4];//pA是指向数组的指针,且数组中存放的是4个int
    
    int w = 66;
    int *pW = &w;
    int *&rW = pW;
    *rW = 88;
    
  
    cout << w << endl;
    cout << pW << endl;
    cout << rW << endl;
    
    changeG() = 66;
    cout << g_a << endl;
    
    int score = 100;
    const int &rScore = score;
    //当常引用指向了不同类型的数据时,会产生临时变量,即引用指向的并不是初始变量
    const double &rScore1 = score;
    score = 99;
    cout << "score = " << score << endl;
    cout << "rScore = " << rScore << endl;
    cout << "rScore1 = " << rScore1 << endl;
    
    return 0;
}
