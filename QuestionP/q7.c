#include<stdio.h>
int main(){
    int arr[] = [1,2,2,3,3,4,5,5,6,6];
    int length=sizeof(arr)/sizeof(int);
    int arr1[length];
    for(int i=0; i<length-1;i++){
        for(int j = i+1; j<length;j++){
            if(arr[i]==arr[j]){
                
            }
        }
    }

}