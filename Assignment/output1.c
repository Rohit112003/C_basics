#include<stdio.h>
int main(){
    int i =1;
    while(i<5)
    {
        printf("%d", i++);
        if(i>10)
        break;
    }
    return(0); 
}