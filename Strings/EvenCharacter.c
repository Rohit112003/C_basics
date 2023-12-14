#include<stdio.h>
#include<string.h>

int mainCount(char *check){
    int count = 0;
    int i =0;
    while(check[i]!='\0'){
        int charval = (int)check[i];
        if(charval%2==0){
            count++;
        }
        i++;
    }
    return count;
}

int main(){
    char check[] = "Check value";
    int ans = mainCount(check);
    printf("%d" , ans);
}