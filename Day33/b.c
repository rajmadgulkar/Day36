#include<stdio.h>
char *Mystrcat(char *str1,char *str2){
    while(*str1!=0){
        str1++;
    }
    while(*str2!='\0'){
        *str1=*str2;
        str1++;
        str2++;
    }
    *str1='\0';
    return str1;
}
void main(){
    char str1[20]={'R','A','J','\0'};
    char *str2="MADGULKAR";

    puts(str1);
    puts(str2);

    Mystrcat(str1,str2);

    puts(str1);
    puts(str2);
}
/*
RAJ
MADGULKAR
RAJMADGULKAR
MADGULKAR*/
