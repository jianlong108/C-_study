//
//  constructor.cpp
//  9-Class
//
//  Created by wangjianlong on 2018/12/19.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#include "constructor.hpp"
#include <iostream>
using namespace std;

/*
You were incorrect when you said "Yes it does" when asked whether the definition matches the header. It does not match the header, because it's not even present in the header!

Your class FBullCowGame doesn't declare a custom constructor, so the compiler created a default one. You then try to create a custom one, and the compiler thinks you're trying to implement the default constructor (which happens to be noexcept), so it says "This redeclaration doesn't match the implicit declaration."

Your real problem is that you forgot to tell the compiler "I'm going to give this class a custom constructor."
*/

//error1: 'Person' is missing exception specification 'noexcept'
Person::Person()
{
    cout << "Person()" <<endl;
}

Person::Person(int age)
{
    this ->m_age = age;
    cout << "Person(int age)" <<endl;
}

Person::~ Person()
{
    cout << "~ Person()" <<endl;
}

void Person::setAge(int age)
{
    this->m_age = age;
}

int Person::getAge()
{
    return this->m_age ;
}

void Student::setScore(float score)
{
    this->m_score = score;
}

float Student::getScore()
{
    return this->m_score;
}
