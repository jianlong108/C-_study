//
//  Object.hpp
//  18-Copy Constructor
//
//  Created by Wangjianlong on 2018/12/24.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#ifndef Object_hpp
#define Object_hpp

#include <stdio.h>
#include <iostream>

class Object {
    int referenceCount;
public:
    Object();
    ~Object();
    Object(int referenceCount);
    Object(const Object &obj);
};

#endif /* Object_hpp */
