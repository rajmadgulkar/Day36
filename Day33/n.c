#include<stdio.h>
char *Mystrcpy(char *dest,char *src,int n){

    while(n!=0){
        *dest=*src;
        dest++;
        src++;
        n--;
    }
    *dest='\0';
    return dest;
}
void main(){
    char *str1="Virat Kohli";
    char str2[20];
    int n=5;
    Mystrcpy(str2,str1,n);
    puts(str2);


}
// Virat