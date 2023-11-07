#include <stdlib.h>
#include <stdio.h>

int * fun()
{
	int *ptr = (int *)malloc(10*sizeof(int));
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &ptr[i]);
	}
	return ptr;
}

void main()
{
	int *value = fun();
	printf("Entered values are: \n");
	for(int i = 0; i < 10; i++)
	{
		printf("%d\n", value[i]);
	}
}
