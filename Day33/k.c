#include<stdio.h>
#include<string.h>
void main(){
    char str[20]="RajMadgulkar";
    puts(str);
    strlwr(str);
    puts(str);
    strupr(str);
    puts(str);
}
/*
RajMadgulkar
rajmadgulkar
RAJMADGULKAR
*/