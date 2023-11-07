#include<stdio.h>
void add();
int main(){
add();
add();
add();
return 0;
}
void add(){
int a,b,c,d,e;
printf("Enter first value:");
scanf("%d" ,&a);
printf("Enter secound value:");
scanf("%d" ,&b);
printf("the sum=%d\n",a+b);
}

