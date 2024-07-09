#include<stdio.h>
char *Mystrcpy(char *dest,char *src,int n){
    int count=0;

    while(n!=0&&*src!='\0'){
        *dest=*src;
        dest++;
        src++;
        n--;
        count++;
    }
    printf("%d\n",count);
    *dest='\0';
    return dest;
}
void main(){
    char *str1="Vir";
    char str2[20];
    int n=5;
    Mystrcpy(str2,str1,n);
    puts(str2);


}
// 3
// Vir