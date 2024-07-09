#include<stdio.h>
char *Mystrrev(char *str){
    char *temp=str;
    while(*temp!='\0'){
        temp++;
    }
    temp--;
    char x;

    while(str<temp){
        x=*str;
        *str=*temp;
        *temp=x;
        str++;
        temp--;
    }

}
void main(){
    char str[10]="raj";
    puts(str);
    Mystrrev(str);
    puts(str);


}
/*
raj
jar
*/