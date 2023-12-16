#include<stdio.h>
#include<string.h>

int main(){
    char s1[30] = "hello";
    strcat(s1,"and more");
    printf("%s", s1);
}