//
//  Manager.hpp
//  16-singleton
//
//  Created by wangjianlong on 2018/12/24.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#ifndef Manager_hpp
#define Manager_hpp

#include <stdio.h>
#include <iostream>

class Manager {
private:
    Manager();
    ~Manager();
    static Manager *instance;
public:
    static Manager *shareInstance();
    static void releaseInstance();
};

#endif /* Manager_hpp */
