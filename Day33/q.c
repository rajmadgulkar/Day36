#include<stdio.h>
#include<string.h>
void main(){
char *arr[3]={"Raj","Tushar","Raj"};
printf("%p\n",arr[0]);//Same
printf("%p\n",arr[1]);
printf("%p\n",arr[2]);//Same as R/O data gets same address

puts(arr[0]);
printf("%s\n",arr[2]);



}
/*
00007ff7e950a050
00007ff7e950a054
00007ff7e950a050
Raj
Raj
*/