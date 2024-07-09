//Using declaration
#include<stdio.h>
#include<string.h>
void main(){
    char str1[20]={'R','A','J','\0'};
    char *str2="MADGULKAR";

    puts(str1);
    puts(str2);

    strcat(str1,str2);

    puts(str1);
    puts(str2);
}
/*
RAJ
MADGULKAR
RAJMADGULKAR
MADGULKAR
*/