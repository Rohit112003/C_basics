//points to be noted
//A is  a array
//address- &A[i] or (A+i)
//value  - A[i] or *(A+i) 

#include<stdio.h>
int main(){
    int A[] = {2,4,5,8,1};
    int B[] = {2,4,5,8,1};
    // printf("%d\n", A);
    // printf("%d\n", &A[0]);
    // printf("%d\n", A[0]);
    // printf("%d\n", *A);
    for(int i =0; i<5;i++){
        printf("Address = %d\n", &A[i]);
        printf("Address = %d\n", A+i);
        printf("Address = %d\n", *B);
        printf("Address = %d\n", *(A+i));
    }

}