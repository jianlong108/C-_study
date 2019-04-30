//
//  11-initializationList.hpp
//  GrammerOfCpp
//
//  Created by wangjianlong on 2019/4/30.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#ifndef _1_initializationList_hpp
#define _1_initializationList_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Man {
    int m_age;
    float m_height;
    char *m_name;
public:
    Man();
    Man(int age = 10);
    Man(int age, float height);
    ~Man();
    void running();
    
    void setName(char const *name);
    
    char const *getName();
};

class Soccer : public Man {
    
public:
    Soccer();
    void playFootball();
};

#endif /* _1_initializationList_hpp */
