#include<stdio.h>
int main(){
    int A[5];
    int *ptr  =A;
    for(int i =0; i<5;i++){
        // printf("enter the value");
        // scanf("%d", ptr);
        // printf("address number is %d\n", ptr);
        // ptr++;
        *ptr = i;
        ptr++;
    }
    ptr=A;
   
    for(int i =0; i<5;i++){
        printf("%d", *ptr);  
        ptr++;
    }
   

}