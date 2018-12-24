//
//  Manager.cpp
//  16-singleton
//
//  Created by wangjianlong on 2018/12/24.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#include "Manager.hpp"

using namespace std;

Manager* Manager::instance = NULL;

Manager * Manager::shareInstance()
{
    if (instance == NULL) {
        instance = new Manager();
    }
    return instance;
}

void Manager::releaseInstance()
{
    if (instance) {
        delete instance;
        instance = NULL;
    }
    
}

Manager::Manager()
{
    cout << "Manager()" << endl;
}
Manager::~Manager()
{
    cout << "~Manager()" << endl;
}
