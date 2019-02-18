//
//  main.cpp
//  算法
//
//  Created by wangjianlong on 2019/2/14.
//  Copyright © 2019 wangjianlong. All rights reserved.
//

#include <iostream>
#include <map>
#include <set>
#include <vector>

#include "1-两数之和.hpp"
#include "2- 两数相加.hpp"
#include "3-无重复字符的最长子串.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
//    1.两数之和
//    vector<int>sourceArray{2,7,11,15};
//    int target = 9;
//    vector<int>v = twoSum_hash(sourceArray,target);
//    cout << v[0] << " " << v[1] << endl;
    
    string s = string("aabcc");
//    cout << lengthOfLongestSubstring(s) << endl;
    cout << charMap_lengthOfLongestSubstring(s) << endl;
    return 0;
}
