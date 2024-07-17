#include<stdio.h>
struct cricPlayer{
    int jerNo;
    float avg;
    char grade;
};
void main(){
    struct cricPlayer vk;
    printf("%d\n",sizeof(vk));
    //or
    printf("%d\n",sizeof(struct cricPlayer));

}
/*
12
12
*/
