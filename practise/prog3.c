#include<stdio.h>
int main()
{
float t;

printf("Enter temp in degree C:");
scanf("%f" ,&t);

printf("Temp in degree C:%.2f\n",t);
float f;
f=9*t/5+32;
printf("Temp in degree F:%.2f\n",f);
return 0;
}
