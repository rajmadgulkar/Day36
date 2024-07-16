#include<stdio.h>
#include<stdlib.h>
void* malloc(size_t);
int mallocAdd(){
    int *ptr1=(int*)malloc(sizeof(int));
    int *ptr2=(int*)malloc(sizeof(int));
    *ptr1=10;
    *ptr2=20;
    return *ptr1+*ptr2;
}
void main(){
    int x=mallocAdd();
    printf("%d",x);
}
/*
30
*/