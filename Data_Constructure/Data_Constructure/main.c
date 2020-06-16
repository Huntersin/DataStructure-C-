//
//  main.c
//  Data_Constructure
//
//  Created by wenze on 2020/6/16.
//  Copyright © 2020 wenze. All rights reserved.
//

#include <stdio.h>
#include "Linkedlist.h"
void disPlay(link *p);
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int a[] = {0,2,3,4,5,6};
    link *p =  initNoHeadLink(a,sizeof(a)/sizeof(a[0]));
    disPlay(p);
    return 0;
    
}

void disPlay(link *p)
{
    link *temp = p;
    while (temp) {
        printf(" %d",temp ->elem);
         temp = temp ->next ;
    }
    printf("\n");
    
}
