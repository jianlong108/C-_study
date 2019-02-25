//
//  Tree.cpp
//  1-1链表
//
//  Created by wangjianlong on 2019/2/22.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#include "Tree.hpp"
#include <iostream>

using namespace std;

void preOrderTraverse(BiTree T)
{
    if (T == NULL) {
        return;
    }
    cout << T->data <<endl;
    
    //先序遍历左子树
    preOrderTraverse(T->lchild);
    //最后先序遍历右子树
    preOrderTraverse(T->rchild);
}

void inOrderTraverse(BiTree T)
{
    if (T == NULL) {
        return;
    }
    inOrderTraverse(T->lchild);
    cout << T->data <<endl;
    inOrderTraverse(T->rchild);
}

void PostOrderTraverse(BiTree T)
{
    if (T == NULL) {
        return;
    }
    inOrderTraverse(T->lchild);
    inOrderTraverse(T->rchild);
    cout << T->data <<endl;
}

void creatBigTree(BiTree *T)
{
    char ch;
    cout << "请输入一个字符" << endl;
    cin >> ch;
    
    if (ch == '#') {
        *T = NULL;
    } else {
        *T = (BiTree)malloc(sizeof(BiTNode));
        if (*T) {
            (*T)->data = ch;
            creatBigTree(&(*T)->lchild);
            creatBigTree(&(*T)->rchild);
        }
    }
}
