#include<stdio.h>
void giveBinary(int n){
   if(n>0){
    giveBinary(n/2);
    printf("%d",n%2 );
   }
}
int main(){
   int n;
   scanf("%d", &n);
   giveBinary(n) ;
}
