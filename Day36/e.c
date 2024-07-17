#include<stdio.h>
struct Demo{
    char ch;
    int x;
    float y;
    double arr[5];
};
void main(){
    printf("%d\n",sizeof(struct Demo));

}
//56