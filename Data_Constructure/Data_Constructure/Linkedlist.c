//
//  Linkedlist.c
//  Data_Constructure
//
//  Created by wenze on 2020/6/16.
//  Copyright © 2020 wenze. All rights reserved.
//

#include "Linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

// 创建一个单链表

// 1 没有头节点的单链表
link *initNoHeadLink(int a[],int count){
    // 创建头指针
    link *p = NULL;
    // 创建首元节点 隐式声明库函数’malloc’,类型为’void *(unsigned long)’” 加入头文件 #include <stdlib.h>
    link *temp = (link *)malloc(sizeof(link));
    //以结构体中占用字节最大的类型作为补齐标准。
    printf("link节点的空间大小 ======%lu", sizeof(link));
    // 给头节点添加元素
    temp ->elem = a[0];
    temp ->next = NULL;
    //头指针指向首元节点
    p = temp;
    // 当为参数的时候  a是指针的大小 64位系统 为8个字节
    //int arryCount =  sizeof(a)/sizeof(a[0]);
    // 从第二个节点开始创建
    for(int i = 1; i < count;i++){
        link *secondLink = (link*)malloc(sizeof(link));
        // 两种写法
        secondLink ->elem = a[i];
        secondLink ->elem =  *(a + i);
        //secondLink ->next = NULL;
        temp ->next = secondLink;
        temp = secondLink; // temp = temp ->next 等价的
        //free(secondLink);
        
    }
    // 通过头指针p 可以找到所有链表
    //free(temp);
    return p;
}

// 插入某个元素
// 1 将新节点的next指针指向插入后的节点 新的q 旧的是p  q ->next = p ->next
// 2 将插入位置前的节点的next指针指向插入节点   q -next = q

link *insertElem(link *p,int elem ,int location){
    // 创建一个临时指针 指向p
    link *temp = p;
    // 插入位置的上一个节点
    for(int i= 1; i < location;i++){
        temp = temp ->next;
        if(temp == NULL){
            // 插入位置无效
            return p;
        }
    }
    
    // 创建新的节点
    link *newC = (link *)malloc(sizeof(link));
    newC ->elem = elem;
    // 1 将新节点的next指针指向插入后的节点
    newC ->next = temp ->next;
    // 2 将插入位置前的节点的next指针指向插入节点
    temp ->next = newC;
    return p;
}

link *delectElem(link *p,int elem)
{
    link *temp = p;
    
    
    return p;
    
    
}



