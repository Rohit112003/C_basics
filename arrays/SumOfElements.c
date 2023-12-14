#include<stdio.h>
int main(){
    int A[]= {1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    int total = sumElements(A,size);
    printf("%d\n",total );
}
int sumElements(int A[], int size){
    int i =0;
    int sum = 0; 
    for(i =0; i<size;i++){
        sum += A[i];
    }
    return sum;
}


    




