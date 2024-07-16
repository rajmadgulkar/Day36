#include<stdio.h>
int a=10;
void fun(int x){
    int y=20;
    printf("%d %d\n",x,y);
}
void gun(){
    char *str="rajmadgulkar";
    printf("%s",str);
}
void main(){
    int b=30;
    fun(10);
    gun();
}
/*
10 20
rajmadgulkar
*/