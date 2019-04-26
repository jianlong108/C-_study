//
//  main.cpp
//  GrammerOfCpp
//
//  Created by Wangjianlong on 2019/4/25.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include <iostream>
#include "1-HelloWorld.hpp"
#include "2-funcReLoad.hpp"
#include "3-externC.hpp"
#include "4-defaultParameters.hpp"
#include "5-inline.hpp"
#include "7-reference.hpp"
#include "8-const.hpp"

int main(int argc, const char * argv[]) {
//    helloWorldMain();
    funcReload();
    externCMain();
    defaultParametersMain();
    
    referenceMain();
    constMain();
    return 0;
}
