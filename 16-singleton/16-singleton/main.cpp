//
//  main.cpp
//  16-singleton
//
//  Created by wangjianlong on 2018/12/24.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#include <iostream>
#include "Manager.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << Manager::shareInstance() << endl;
    cout << Manager::shareInstance() << endl;
    Manager::releaseInstance();
    cout << Manager::shareInstance() << endl;
    return 0;
}
