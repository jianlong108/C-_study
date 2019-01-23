//
//  Object.cpp
//  18-Copy Constructor
//
//  Created by Wangjianlong on 2018/12/24.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#include "Object.hpp"
using namespace std;

Object::Object()
{
    cout << "Object()" << endl;
}

Object::~Object()
{
    cout << "~Object()" << endl;
}

Object::Object(int referenceCount):referenceCount(referenceCount)
{
    cout << "Object(int referenceCount)" << endl;
}

Object::Object(const Object &obj):referenceCount(obj.referenceCount)
{
    cout << "Object(const Object &obj)" << endl;
}
