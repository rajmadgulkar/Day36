#include<stdio.h>
void fun(){
        int y=10;
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
11
11
*/