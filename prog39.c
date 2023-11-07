#include <stdio.h>

struct complex{
	int re;
	int im;
};

void main(){
	struct complex c1,c2;
	printf("Enter the real and imaginary of complex 1: ");
	scanf("%d", &c1.re);
	scanf("%d", &c1.im);
	printf("Enter the real and imaginary of complex 2: ");
	scanf("%d", &c2.re);
	scanf("%d", &c2.im);
	int sub1 = c2.im - c1.im;
	int sub2 = c2.re - c1.re;
	int add1 = c2.im+c1.im;
	int add2 = c2.re+c1.re;
	
	printf("Sum of complex number is %d + %di\n", add2, add1);
	printf("Sub of complex number is %d + %di\n", sub2, sub1);
}
