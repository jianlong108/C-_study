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

//插入排序
vector<int> insertionSorting(vector<int>sourceArray) {
    // 对 arr 进行拷贝，不改变参数内容
    vector<int> arr(sourceArray);
    
    // 从下标为1的元素开始选择合适的位置插入，因为下标为0的只有一个元素，默认是有序的
    for (int i = 1; i < arr.size(); i++) {
        // 记录要插入的数据
        int tmp = arr[i];
        // 从已经排序的序列最右边的开始比较，找到比其小的数
        int j = i;
        while (j > 0 && tmp < arr[j - 1]) {
            arr[j] = arr[j - 1];
            j--;
        }

        // 存在比其小的数，插入
        if (j != i) {
            arr[j] = tmp;
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
