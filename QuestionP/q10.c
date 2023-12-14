#include<stdio.h>

void bubbleSort(int * arr,int n){
    for(int i = 0 ; i <n-1; i++){
        for(int j = 0 ; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void sortedArr(int *arr, int *size){
    for(int i =0 ; i <*size;i++){
        printf("%d", arr[i]);
    }
}


int main(){
    int arr[6] = {5,7,8,1,2,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, size);
    sortedArr(arr,&size);
}