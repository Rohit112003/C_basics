#include<stdio.h>
#define sum(a,b) a+b
int main(){
	int a;
	printf("Enter an integer: ");
	scanf("%d",&a);
	
	if(a%2 == 0)
		printf("Even number\n");
	else 
		printf("Odd number\n");
	
	return(0);
}

