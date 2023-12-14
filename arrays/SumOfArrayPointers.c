#include<stdio.h>
int main(){
    int A[] = {1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    int total = sumofElements(A,size);
    printf("%d" ,total);
    //array is passed by passed by reference
}
int sumofElements(int *A, int size){
    int i ,sum= 0;
    for(i=0;i<size;i++){
        sum += A[i]; //A[i] as *(A+i)
    }
    return sum;
}