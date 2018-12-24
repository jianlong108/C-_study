//
//  main.cpp
//  18-Copy Constructor
//
//  Created by wangjianlong on 2018/12/24.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#include <iostream>
#include "Car.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Car c = Car();
    c.m_speed = 100;
    Car c1 = Car(c);
    
    cout << c.m_speed <<endl;
    cout << c1.m_speed <<endl;
    
    return 0;
}
