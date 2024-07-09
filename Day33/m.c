#include<stdio.h>
char *Mystrupr(char *str){
    while(*str!='\0'){
        if(*str>=97&&*str<=122){

            *str=*str-32;

        }
        str++;
    }
    return str;

}

void main(){
    char str[20]="RajMadgulkar";
    puts(str);
    Mystrupr(str);
    puts(str);
   
}
// RajMadgulkar
// RAJMADGULKAR