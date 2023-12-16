#include <stdio.h>

void main(){
	//char dob[20];
	// int dd, mm, yy;
	//printf("Enter the dob: ");
	//scanf("%s", dob);
	
	//sscanf(dob,"%d-%d-%d", &dd, &mm, &yy);
	//printf("Your date is: %d\n", dd);
	//printf("Your month is: %d\n", mm);
	//printf("Your year is: %d\n", yy);
	
	int a,b;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	
	char str[30];
	
	sprintf(str, "%dx^2 + %dx", a, b);
	printf("%s\n", str);
}
