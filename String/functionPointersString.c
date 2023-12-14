#include<stdio.h>
void print(char* c){
    int i = 0;
    while(c[i]!='\0'){  //c[i] as *(c+i)
        printf("%c", c[i]);
        i++;
    }
    printf("\n");
}
int main(){
    char C[20]= "Hello";
    print(C);
}
