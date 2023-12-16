#include<stdio.h>

   void main()
{
	int a = 50;
	{
		extern int a;
		printf("%d\n", a);
	}    	
}
