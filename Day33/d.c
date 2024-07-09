#include<stdio.h>
#include<string.h>
void main(){
    char *str1="raj";
    char *str2="ram";

    int diff=strcmp(str1,str2);

    printf("%d\n",diff);

    if(diff==0){
        printf("Strings are equal\n");
    }
    else{
        printf("Strings are not equal");
    }

    
}
/*
-1
Strings are not equal
*/