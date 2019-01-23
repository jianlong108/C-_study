//
//  main.cpp
//  18-Copy Constructor
//
//  Created by wangjianlong on 2018/12/24.
//  Copyright © 2018 wangjianlong. All rights reserved.
//

#include <iostream>
#include "Car.hpp"
#include <vector>

using namespace std;

//选择排序
vector<int> selectSort(vector<int>sourceArray) {
    vector<int> arr(sourceArray);
    
    // 总共要经过 N-1 轮比较
    for (int i = 0; i < arr.size() - 1; i++) {
        int min = i;
        // 每轮需要比较的次数 N-i
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[min]) {
                // 记录目前能找到的最小值元素的下标
                min = j;
            }
        }
        
        // 将找到的最小值和i位置所在的值进行交换
        if (i != min) {
            int tmp = arr[i];
            arr[i] = arr[min];
            arr[min] = tmp;
        }
        
    }
    return arr;
}

int main(int argc, const char * argv[]) {
    
//    Car c = Car();
//    c.m_speed = 100;
//    Car c1 = Car(c);
//
//    cout << c.m_speed <<endl;
//    cout << c1.m_speed <<endl;
    
    vector<int>sourceArray{2,1,5,4,3};
    
    vector<int> goodA = selectSort(sourceArray);
    
    cout <<"排序后的数组:";
    for(int i = 0; i < goodA.size(); i++)
    {
        cout << goodA[i];
    }
    cout << endl << "源数组:";
    
    for(int i = 0; i < sourceArray.size(); i++)
    {
        cout << sourceArray[i];
    }
    cout << endl;
    return 0;
}



