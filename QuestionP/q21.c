#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    int num_elements = 5;
    arr= (int*)calloc(num_elements,sizeof(int));

    printf("Initialized all elements");
    for(int i = 0; i<num_elements;i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<num_elements;i++){
        printf("%d", *(arr+i));
    }
}