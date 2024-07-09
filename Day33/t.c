#include<stdio.h>
void main(int argc,char *argv[]){
        for (int i=0; i<argc;i++){
                printf("%p\n",argv[i]);
        }
}
/*
./a.out raj partik jay tushar
0x7ffcb316e3d0
0x7ffcb316e3d8
0x7ffcb316e3dc
0x7ffcb316e3e3
0x7ffcb316e3e7
*/