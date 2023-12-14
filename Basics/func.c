#include<stdio.h>
int sumFunc(int a, int b){
    return a+b;
}
int main(){
    int a= 9;
    int b = 10;
    int sum = sumFunc(a,b);
    printf("%d", sum);
}