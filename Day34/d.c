#include<stdio.h>
void fun(){
        static int y=10;//static keyword acts as global variable
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