//
//  GoodStudent.hpp
//  12-initializationList
//
//  Created by Wangjianlong on 2018/12/23.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#ifndef GoodStudent_hpp
#define GoodStudent_hpp

#include <stdio.h>
#include "Student.hpp"

class GoodStudent : public Student {
    
    float m_cash;
public:
//    GoodStudent();
    GoodStudent(float cash);
    void running();
};

#endif /* GoodStudent_hpp */
