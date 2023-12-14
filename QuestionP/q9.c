#include<stdio.h>
int main(){
    int arr[5] = {7,1,2,3,5};
    int arr1[5] = {2,4,6,7,8};
    int arr2[5];
    for(int i =0 ;i<5; i++){
        arr2[i] = arr1[i]+arr[i];
    }
    for(int i =0 ;i<5; i++){
        printf("%d ", arr2[i]);
    }
}