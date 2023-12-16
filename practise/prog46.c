#include <stdio.h>
#include <stdlib.h>

int * fun()
{
	int *value = (int *)malloc(sizeof(int));
	printf("Enter the value of integer: ");
	scanf("%d", value);
	return value;
}

void main()
{
	int *value = fun();
	int *value1 = fun();
	
	printf("%d\n", *value);
	printf("%d\n", *value1);
	
	free(value);
	free(value1);
	
	printf("%d\n", *value);
	printf("%d\n", *value1);
}
