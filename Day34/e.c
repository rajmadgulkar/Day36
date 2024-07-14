#include<stdio.h>
int y=10;
void fun(){
    ++y;
    printf("%d\n",y);
}
void main(){
    fun();
    printf("%d\n",y);
    fun();
    printf("%d\n",y);
    fun();
    printf("%d\n",y);

}
/*
11
11
12
12
13
13\
*/