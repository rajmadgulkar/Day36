#include<stdio.h>
#include<stdlib.h>
void fun(){
    int x=10;
    int *ptr=(int*) malloc(sizeof(int));
    printf("%p\n",*ptr);
}
void main(){
    fun();

}
/*
0000000069ceef80
*/