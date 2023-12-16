#include<stdio.h>
#include<math.h>
float payment(float p,int n,float i){
i=i/12;

float pay=(i*p)/(1-pow((1+i),-n);
return (pay);
}
void main(){
int n;
float p,pp,d,i;
printf("Purchase price:$ ");
scanf("%f" ,&pp);
printf("Down payment:$ ");
scanf("%f" ,&d);
printf("Interest rate:");
scanf("%f" ,&i);
printf("no. of payments:");
scanf("%d" ,&n);
p=pp-d;
printf("Principle payments:%.2f\n",p);
float mp=payment( p,n,i)/12.0;
printf("Monthly payments:$ %.2f\n", mp);
}

