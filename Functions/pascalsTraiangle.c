#include<stdio.h>
int main(){
    int a;
    scanf("%d" ,&a);
    for(int i =0; i<a;i++){
        for(int j =0; j<a;j++){
            int x = ncr(i,j);
            printf("%d",x);

        }
        printf("\n");
    }
}
int ncr(int n,int r){
    return fact(n)/fact(r)*fact(n-r);
}
int fact(int n){
    int f =1;
    for(int i = 1;i<=n;i++){
        f*=i;

    }
    return f;
}