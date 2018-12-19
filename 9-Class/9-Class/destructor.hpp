//
//  destructor.hpp
//  9-Class
//
//  Created by wangjianlong on 2018/12/19.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#ifndef destructor_hpp
#define destructor_hpp

#include <stdio.h>
#include "constructor.hpp"

class Student {
    int m_score;
    Person *p;
public:
    //构造函数和析构函数,必须为public
    ~Student();
    Student();
    Student(int score);
    void setScore(int score);
    int getScore();
};

#endif /* destructor_hpp */
