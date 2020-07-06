//
//  Linkedlist.h
//  Data_Constructure
//
//  Created by wenze on 2020/6/16.
//  Copyright © 2020 wenze. All rights reserved.
//

#ifndef Linkedlist_h
#define Linkedlist_h

#include <stdio.h>

/**
   链表
    1 链表的物理存储位置随机的 ,
    2 节点: (1)  数据域 数据本身  (2)指针域 :指向后续元素的指针
           头结点:不是必须的,
    3 头指针 一个普通的指针,永远指向链表第一个节点
 */
typedef struct Link{
    int elem; //数据
    struct Link *next; // 指针域,指向下一个元素
}link;// 节点名 每个节点都是这样的结构体

typedef struct Line{
    struct Line *prior;//指向前驱节点
    int  elem;//数据
    struct Line *next;// 指向后续节点
    
}line;
/**
 初始化一个单链表
 */
link *initNoHeadLink(int a[],int count);

/**
 链表插入元素
 */

link *insertElem(link *p,int elem ,int location);

/**
 删除元素链表
 elem 删除元素
 location 删除链表的位置
 */

link *delectElem(link *p,int elem,int location);
#endif /* Linkedlist_h */
