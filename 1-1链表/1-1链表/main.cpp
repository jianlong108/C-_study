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
    string s = getTmpString(string("123abc4"));
    cout << s << endl;
    return 0;
}
