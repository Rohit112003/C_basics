#include<stdio.h>

struct complex{
	int re;
	int im;
};

void main(){
	struct complex com_info;
	struct complex *com1;
	com1 = &com_info;
	struct complex *com2;
	com2 = &com_info;
	
	printf("Enter real and imaginary of first complex numbr: ");
	scanf("%d %d", &com1->re, &com1->im);
	printf("Enter real and imaginary of scond complex numbr: ");
	scanf("%d %d", &com2->re, &com2->im);
	
	int add1 = com1->re + com2->re;
	int add2 = com1->im + com2->im;
	int sub1 = com2->re - com1->re;
	int sub2 = com2->im - com1->im;
	
	printf("Sum of complex number is: %d+(%di)\n", add1, add2);
	printf("Sub of complex number is: %d+(%di)\n", sub1, sub2);
}
