#include<stdio.h>
#include<string.h>
int main(){
    char c[20] ="Rohit"; //here the null character is implicit
    int len = strlen(c);
    printf("%d\n",len);
    printf("%s",c);
}