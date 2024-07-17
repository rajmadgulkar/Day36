#include<stdio.h>
struct Demo{
    float f;
    char *ch;
    int x;
    int y;
};
void main(){
    printf("%d\n",sizeof(struct Demo));

}
//24