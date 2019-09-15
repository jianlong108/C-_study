//
//  Array.hpp
//  template
//
//  Created by Wangjianlong on 2019/9/15.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <stdio.h>

template <typename T>
class JLArray {
    T *m_items;
    int m_size;
    int m_capacity;
    void checkIndex(int index);
public:
    JLArray(int capacity = 0);
    ~JLArray();
    void add(T value);
    void remove(int index);
    void insert(int index, T value);
    T get(int index);
    int size();
    T operator[](int index);
};



#endif /* Array_hpp */
