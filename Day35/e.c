#include<stdio.h>
#include<stdlib.h>
void danglingptr(int x){
    int *ptr1=(int*)malloc(sizeof(int));
    int *ptr2=NULL;
    printf("%p\n",ptr1);
    printf("%p\n",ptr2);

    printf("%p\n",*ptr1);
    printf("%p\n",*ptr2);
   
}
void main(){
    danglingptr(20);
}
/*
0000000000000000
000000009578ef80
Core Dump
*/