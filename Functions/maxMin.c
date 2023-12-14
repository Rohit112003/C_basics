#include<stdio.h>
int main(){
    int a;
    printf("Enter a number");
    scanf("%d", &a);
    int b;
    printf("Enter a number");
    scanf("%d", &b);
    int m = min(a,b);
    printf("minimum numberof %d and %d is %d", a,b,m);
}
int min(int x, int y){
    if(x<y){
        return x;
    }else{
        return y;
    }
}