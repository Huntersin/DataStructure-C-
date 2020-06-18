//
//  main.c
//  Data_Constructure
//
//  Created by wenze on 2020/6/16.
//  Copyright © 2020 wenze. All rights reserved.
//

#include <stdio.h>
#include "Linkedlist.h"
void disPlay(link *p,int loopNum);
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int a[] = {0,2,3,4,5,6};
    link *p =  initNoHeadLink(a,sizeof(a)/sizeof(a[0]));
    disPlay(p,6);
    
    link *inserp =  insertElem(p, 15, 3);
    //printf("%d\n",inserp->elem);
    disPlay(inserp,7);
    
    return 0;
    
}

void disPlay(link *p ,int loopNum)
{
    link *temp = p;
    int num = 0;
    while (loopNum >  num) {
        printf(" %d",temp ->elem);
        temp = temp ->next ;
        num++;
    }
    // crash
//    while (temp) {
//        printf(" %d",temp ->elem);
//        temp = temp ->next ;
//        //num++;
//    }
    
    printf("\n");
    
}
