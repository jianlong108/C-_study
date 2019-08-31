//
//  7-reference.hpp
//  GrammerOfCpp
//
//  Created by Wangjianlong on 2019/4/25.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#ifndef __reference_hpp
#define __reference_hpp

#include <stdio.h>

void referenceMain();

#endif /* __reference_hpp */

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

