#include<stdio.h>
#include<stdlib.h>
void fun(){
    int x=10;
    int *ptr=(int*)malloc(sizeof(int));
    printf("%p\n",ptr);
    printf("%d\n",*ptr);//GV
    *ptr=50;
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
    free(ptr);
}
void main(){
    fun();

}
/*
00000206776c7ec0
2003627904
00000206776c7ec0
50
*/