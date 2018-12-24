//
//  Car.hpp
//  19-Copy
//
//  Created by Wangjianlong on 2018/12/24.
//  Copyright © 2018 JL.Com. All rights reserved.
//

#ifndef Car_hpp
#define Car_hpp

#include <stdio.h>
#include <iostream>

class Car {
    
public:
    int m_speed;
    char *m_name = NULL;
    
    Car();
    ~Car();
    
    Car(int speed, const char *name);
    
    void display();
};

#endif /* Car_hpp */
