#include<stdio.h>
int y=10;
void fun(){
        
        ++y;
        printf("%d\n",y);
}
void main(){
        fun();
        fun();
        fun();
}
/*
11
12
13
*/