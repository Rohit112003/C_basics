#include<stdio.h>

void main(){
	printf("Please write your name: ");
	char name[20];
	scanf("%[^\n]s", name);
	printf("Please enter your age: ");
	int age;
	scanf("%d", &age);
	printf("Please enter your registraion number: ");
	int regd_no;
	scanf("%d", &regd_no);
	
	printf("%s\n", name);
	printf("%d\n", age);
	printf("%d\n", regd_no);
	printf("THANK YOU\n");
}
