#include<stdio.h>
#include<string.h>
void main(){
char arr1[3][10]={{'R','A','J','\0'},{'T','U','S','H','A','R','\0'},{'J','A','Y','\0'}};
puts(arr1[0]);
puts(arr1[1]);
puts(arr1[2]);

strcpy(arr1[2],"Rahul");
puts(arr1[0]);
puts(arr1[1]);
puts(arr1[2]);

}
/*
RAJ
TUSHAR
JAY
RAJ
TUSHAR
Rahul
*/