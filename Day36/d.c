#include<stdio.h>
struct Demo{
    char ch;
    int x;
    float y;
    char arr[20];
};
void main(){
    printf("%d\n",sizeof(struct Demo));

}
//32