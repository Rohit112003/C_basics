#include<stdio.h>
#include <stdbool.h>
bool checkdivisble(int *a){
    int sum = 0;
    while(*a>0){
        int b= *a%10;
        sum = sum+b;
        *a = *a/10;
    }
    if( sum%9==0){
       return true;
    }

    return false;
    
}

int main(){
    int a ;
    printf("enter 5 digit number for better result");
    scanf("%d" , &a);
   int *ptr = &a;
    bool ans = checkdivisble(ptr);
     if (ans) {
        printf("divisible by 9.\n");
    } else {
        printf("not divisible by 9.\n");
    }

    return 0;
   
    
}