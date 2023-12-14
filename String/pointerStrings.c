#include<stdio.h>
int main(){
    char c1[6] ="Hello";
    char* c2;
    c2 =c1;
    printf("%c", *c2) ;
    printf("%c\n", c2[1]);// c2[i] is *(c2+i)
}