//
//  Array.cpp
//  template
//
//  Created by Wangjianlong on 2019/9/15.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include "Array.hpp"
#include <iostream>
using namespace std;

template <typename T>
JLArray<T>::JLArray(int capacity) {
    if (capacity < 10) {
        m_capacity = 10;
    } else {
        m_capacity = capacity;
    }
    m_items = new T[m_capacity];
}

template <typename T>
JLArray<T>::~JLArray() {
    delete [] m_items;
    m_items = nullptr;
    m_capacity = 0;
    m_size = 0;
}

template <typename T>
void JLArray<T>::checkIndex(int index) {
    if (index < 0 || index > m_capacity) {
        throw "index is valid";
    }
}



template <typename T>
void JLArray<T>:: add(T value)
{
    if (m_size == m_capacity) {
        // 扩容
        /*
         1.申请一块更大的新空间
         2.将旧空间的数据拷贝到新空间
         3.释放旧空间
         */
        cout << "空间不够" << endl;
        return;
    }
    
    m_items[m_size++] = value;
}

template <typename T>
void JLArray<T>:: remove(int index)
{
    checkIndex(index);
}

template <typename T>
void JLArray<T>:: insert(int index, T value)
{
    
}

template <typename T>
T JLArray<T>:: get(int index)
{
    checkIndex(index);
    return m_items[index];
}

template <typename T>
int JLArray<T>:: size()
{
    return m_size;
}
template <typename T>
T JLArray<T>::operator[](int index)
{
    return get(index);
}
