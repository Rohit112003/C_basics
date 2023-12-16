#include<stdio.h>
int main()
{
char a;
a='a';
printf("Address of a :%p\n", &a);
printf("Size of a :%d\n",sizeof(a));
printf("Value of a :%c\n", a);
return(0);
}
