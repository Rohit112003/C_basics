#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[] = {1,1,2,3,4,4,5,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    checkArray(arr,size);
}

void checkArray(int arr[], int size){
    for(int i =0; i<size;i++){
        bool  match =false;
        for(int j = 0; j<size;j++){
            if(arr[i]==arr[j] && i!=j){
                match= true;
            }
        }
        if(!match){
            printf("%d ",arr[i]);
        }
    }
}