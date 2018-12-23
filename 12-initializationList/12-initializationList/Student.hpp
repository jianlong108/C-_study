//
//  Student.hpp
//  12-initializationList
//
//  Created by Wangjianlong on 2018/12/23.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include "Person.hpp"

class Student : public Person {
    float m_score;
    
public:
//    Student();
    
    Student(float score);
    Student(float score,int age,float height);
    
    void running();
};

#endif /* Student_hpp */
