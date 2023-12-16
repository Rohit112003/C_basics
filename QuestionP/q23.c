#include<stdio.h>
#include<string.h>
void checkReverse(char arr[], int size){
    char arr2[size];
    int  k =0;
    for(int i = size-1; i>=0;i--){
        arr2[k] = arr[i];
        k++;
    }
    arr2[k] = '\0';
    printf("%s", arr2);

}
int main(){
    char arr[] = "Hey there";
    int length = strlen(arr);
    checkReverse(arr,length);
}
