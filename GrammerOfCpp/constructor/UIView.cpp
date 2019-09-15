//
//  UIView.cpp
//  constructor
//
//  Created by Wangjianlong on 2019/9/2.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include "UIView.hpp"

UIView::UIView() {
    m_tag = 0;
    m_superView = new UIView();
}

UIView::~UIView() {
    if (m_superView) {
        delete m_superView;
    }
}
