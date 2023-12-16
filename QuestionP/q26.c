#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "ITER-IBSC-SHM-SUM-IDS";
    char *token = strtok(str,"-");
    int count = 0;
    while(token!=NULL){
        printf("=%s\n", token);
        count++;
        token = strtok(NULL,"-");
    } 
     printf("=%d\n", count);
  
}