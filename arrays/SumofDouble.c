#include<stdio.h>
void Double(int *A, int size){
    int sum =0; 
    for(int i =0; i<size;i++){
        A[i] = 2*A[i];
    }
}
int main(){
    int A[] = {1,2,3,4,5,6};
    int size = sizeof(A)/sizeof(A[0]);
    int i ;
    Double(A,size);
    for(i =0; i<size;i++){
        printf("%d\n",*(A+i));
    }
}