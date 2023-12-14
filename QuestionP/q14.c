#include<stdio.h>

int copyDistinct(int []arr, int size , int destination[]){
    for(int i =0; <size-1;i++){
        for(int j= i+1; j<size;j++){
            if(arr[i]==arr[j]){
                arr[++i] = arr[++j];
            }
        }
    }
    for(int i =0; i<size;i++){
        printf("%d",arr[i]);
    }
}



int main(){
    int arr[7] = {4, 7, 7, 3, 2, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int destination[size];
    int outputSize = copyDistinct(arr, size, destination);
}