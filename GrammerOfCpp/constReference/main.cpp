//
//  main.cpp
//  constReference
//
//  Created by Wangjianlong on 2019/9/1.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include <iostream>
using namespace std;

void constReference() {
    int score = 100;
    
    //    int  & const rScoer = score;
    //    rScoer = 99;
    
    const int &crScore = score;
    //    crScore = 99;
    
    //当常引用指向了不同类型的数据时,会产生临时变量,即引用指向的并不是初始变量
    const double &rScore1 = score;
    score = 99;
    cout << "score = " << score << endl;
    cout << "rScore = " << crScore << endl;
    cout << "rScore1 = " << rScore1 << endl;
}

int getAge() {
    return 10;
}

void test(){
    int sA = 10;
    int sB = 20;
    //表达式被赋值
    int &r_a = (sA = sB);
    r_a = 40;
    
    int const &r_age = getAge();
    
    int const &r_height = 11;
    
    cout << "sA = " << sA << endl;
}

//int sum(int a, int b) {
//    cout << "int sum(int a, int b)" << endl;
//    return a + b;
//}

int sum(const int &a, const int &b) {
    cout << "int sum(const int &a, const int &b)" << endl;
    return a + b;
}

int sum(int &a, int &b) {
    cout << "int sum(int &a, int &b)" << endl;
    return a + b;
}

int main(int argc, const char * argv[]) {

//    int a = 2;
//    int b = 4;
//    sum(a, b);
//    sum(1, 2);
    
    int arr[] = {1,2,3};
    int (&r_arr)[3] = arr;
    cout << r_arr[2] << endl;
    
    int * const&r_p_arr = arr;
    cout << r_p_arr[1] << endl;
    
    return 0;
}
