//
//  UIView.hpp
//  constructor
//
//  Created by Wangjianlong on 2019/9/2.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#ifndef UIView_hpp
#define UIView_hpp

#include <stdio.h>

class UIView {
    int m_tag;
    UIView *m_superView;
public:
    UIView();
    ~UIView();
};

#endif /* UIView_hpp */
