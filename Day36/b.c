#include<stdio.h>
struct Demo{
    int jerNo;
    float avg;
    double grade;
};
void main(){
    struct Demo vk;
    printf("%d\n",sizeof(vk));
    //or
    printf("%d\n",sizeof(struct Demo));

}
/*
16
16
*/