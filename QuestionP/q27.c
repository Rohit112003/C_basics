#include<stdio.h>
#include<string.h>

int main(){
    char str[]="LEsson-plan-usp-Dos-fml-plc";
    char *token;
    char *last;
    token= strtok_r(str,"-", &last);
    while(token!=NULL){
        printf("Token\n", token);
        token = strtok_r(NULL,"-", &last);
    }
    return 0;
    }