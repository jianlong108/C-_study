//
//  Tree.hpp
//  1-1链表
//
//  Created by wangjianlong on 2019/2/22.
//  Copyright © 2019 JL.Com. All rights reserved.
//

#ifndef Tree_hpp
#define Tree_hpp
#include "Config.h"
/*树
 是n（n>=0）个结点的有限集。
 n=0时，为空树；
 任意一棵非空树中：（1）有且仅有一个特定的称为根的结点。（2）当n>1时，其余结点可分为m（m>0）个互不相交的有限集。其中每一个集合本身又是一棵树，并称为根的子树。
 
 树的结点包含一个数据元素及其若干指向子树的分支。
 
 结点拥有的子树称为结点的度。度为0的结点称为叶结点或终端结点；度不为0的结点称为非终端结点或分支结点。除根结点外，分支结点，也成为内部结点；
 
 树的度是树内各结点的度的最大值。
 
 结点的子树的根称为该结点的孩子。相应地，该结点称为孩子的双亲。
 
 结点的层次从根开始定义起，根为第一层，根的孩子为第二层。。。树中结点的最大层次称为树的深度或高度。
 
 如果将树中结点的各个子树看成从左至右是有次序的，不能互换的，则称为该树为有序树，否则称为无序树。
 
 森林是m（m>0）棵互不相交的树的集合。对树中每个结点而言，其子树的集合即为森林。
 
 
 树的存储结构：双亲表示法，孩子表示法，孩子兄弟表示法。
 
 
 */
#include <stdio.h>

// 双亲表示法：除了根结点外，其余每个结点，它不一定有孩子，但是一定有且仅有一个双亲。
/**
 结点结构
 */
typedef struct {
    //结点数据
    int value;
    //双亲位置
    int parent;
} PTNode;

typedef struct {
    //结点数组
    PTNode nodes[MAXSIZE];
    //根的位置和结点数
    int r,n;
}PTree;

// 孩子表示法：把每个结点的孩子结点排列起来，以单链表作存储结构，则n个结点有n个孩子链表，如果是叶子结点则此单链表为空。然后n个头指针又组成一个线性表，采用顺序存储结构，存进一个一维数组中。


/**
 孩子结点
 */
typedef struct CTNode{
    int child;
    struct CTNode *next;
} *childPtr;


/**
 表头结构
 */
typedef struct {
    int data;
    childPtr firstChild;
}CTBox;


/**
 树结构
 */
typedef struct {
    //结点数组
    CTBox nodes[MAXSIZE];
    //根的位置和结点数
    int r,n;
}CTree;

//如果知道某个结点的双亲，需要遍历整棵树才行。

#endif /* Tree_hpp */
