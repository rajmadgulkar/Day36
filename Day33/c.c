#include<stdio.h>
#include<string.h>
void main(){
    char *str1="raj";
    char *str2="raj";

    int diff=strcmp(str1,str2);

    if(diff==0){
        printf("Strings are equal\n");
    }
    else{
        printf("Strings are not equal");
    }

    
}
//Strings are equal