//
//  main.cpp
//  1-1链表
//
//  Created by Wangjianlong on 2019/2/17.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include <iostream>
#include "SingleLinkList.hpp"
#include "Stack.hpp"
#include "string.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    LinkList head;
    creatLinkListTail(&head, 3);
    LinkList p = head->next;
    while (p) {
        cout << p->val << endl;
        p = p->next;
    }
    int value= 108;
    int i = 2;
//    int status = getElement(head, i, &value);
//    cout << "状态"<< status << ";" <<i << "位置处的值为" << value << endl;
//    deleteLinkList(&head);
    cout << "---------------------"<< endl;
    p = head->next;
    //在第i==2个结点之前插入数据108
    insertList(&head, i, value);
    while (p) {
        cout << p->val << endl;
        p = p->next;
    }
    cout << "---------------------"<< endl;
    p = head->next;
    //删除第i==3个结点之前插入数据
    deletEleList(&head, 3, &value);
    while (p) {
        cout << p->val << endl;
        p = p->next;
    }
    cout << "---------------------"<< endl;
//    string s = getTmpString(string("123abc4"));
//    cout << s << endl;
    string s = string("123abc4acd");
    string t = string("abc");
    cout << t << "在主串："<<s <<"中的位置：" << indexSubString(s, t, 0) << endl;
    cout << "---------------------"<< endl;
    
     return 0;
}
