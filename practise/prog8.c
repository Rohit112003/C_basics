#include<stdio.h>
int add(int a,int b){
b=a+b;
printf("%d\n",b);
return(b);
}
void main(){
int a=10;
int b=5;
printf("the sum=%d\n",add(a,b));
printf("%d\n",b);
}
