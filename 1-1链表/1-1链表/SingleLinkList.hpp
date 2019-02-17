//
//  SingleLinkList.hpp
//  1-1链表
//
//  Created by Wangjianlong on 2019/2/17.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#ifndef SingleLinkList_hpp
#define SingleLinkList_hpp

#include <stdio.h>
#include <iostream>

typedef enum : int {
    Error,
    OK,
} Status;

struct Node {
    int val;
    struct Node *next;
};
typedef struct Node* LinkList;


void creatLinkListHead(LinkList *p,int n);

void creatLinkListTail(LinkList *p,int n);
Status deleteLinkList(LinkList *l);
Status getElement(LinkList L,int i,int *value);
Status insertList(LinkList *L,int i,int value);
Status deletEleList(LinkList *L,int i,int *value);
#endif /* SingleLinkList_hpp */
