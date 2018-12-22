//
//  main.cpp
//  12-initializationList
//
//  Created by wangjianlong on 2018/12/22.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#include <iostream>
#include "Person.hpp"

int main(int argc, const char * argv[]) {
    
    Person *p0 = new Person();
    Person *p = new Person(10,20);
    
    
    return 0;
}
