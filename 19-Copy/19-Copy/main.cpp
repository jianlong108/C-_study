//
//  main.cpp
//  19-Copy
//
//  Created by Wangjianlong on 2018/12/24.
//  Copyright © 2018 JL.Com. All rights reserved.
//

#include <iostream>
#include "Car.hpp"



int main(int argc, const char * argv[]) {
    
    char name[] = {'b','m','w','\0'};
    
        Car *c = new Car(300,name);
//    c->m_speed = 100;
//    c->m_name = "bmw";
    
        c->display();
        
        delete c;
    
    return 0;
}
