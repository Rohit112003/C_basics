#include<stdio.h>
int main()
{
float sub1, sub2, sub3;
char a,b,c;
int a1,a2,a3;
scanf("%f %f %f" , &sub1,&sub2,&sub3);
scanf(" %c %c %c" , &a,&b,&c);
scanf("%d %d %d" , &a1,&a2,&a3);
printf("Mark in sub1: %f\n",sub1);
printf("Mark in sub2: %f\n",sub2);
printf("Mark in sub3: %f\n",sub3);
printf("name in sub1: %c\n",a);
printf("name in sub2: %c\n",b);
printf("name in sub3: %c\n",c);
printf("Mark in sub1: %d\n",a1);
printf("Mark in sub2: %d\n",a2);
printf("Mark in sub3: %d\n",a3);
printf("Avg is: %f \n ",(sub1+sub2+sub3)/3.0);
return 0;
}
