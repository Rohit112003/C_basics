#include<stdio.h>
#include<stdlib.h>
char ** fun()
{
	char **name = (char **)malloc(3*sizeof(char *));
	 *(name) = (char *)malloc(30*sizeof(char));
	 *(name+1) = (char *)malloc(30*sizeof(char));
	 *(name+2) = (char *)malloc(30*sizeof(char));
	
	printf("Enter your name: ");
	scanf(" %[^\n]s", *(name));
	printf("Enter your father's name: ");
	scanf(" %[^\n]s", *(name+1));
	printf("Enter your mother's name: ");
	scanf(" %[^\n]s", *(name+2));
	return name;
}

void main()
{
	char **name = fun();
	printf("%s\n", *name);
	printf("%s\n", *(name+1));
	printf("%s\n", *(name+2));
}
