#include<stdio.h>
char *Mystrlwr(char *str){
    while(*str!='\0'){
        if(*str>=65&&*str<=90){

            *str=*str+32;

        }
        str++;
    }
    return str;

}

void main(){
    char str[20]="RajMadgulkar";
    puts(str);
    Mystrlwr(str);
    puts(str);
   
}
// RajMadgulkar
// rajmadgulkar