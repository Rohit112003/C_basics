#include<stdio.h>
void static_use(int b)
{
	static int a = 1;
	a=a+b;
	printf("a = %d\n", a);
}
void static_use1(int b)
{
	static int a = 1;
	a=a+b;
	printf("a = %d\n", a);
}

void normal_use(int b)
{
	int a = 1;
	a=a+b;
	printf("a = %d\n", a);
}
void main()
{
	int b = 5;
	printf("b = %d\n", b);
	for(int i =0; i<3;i++){
		normal_use(b);
	}
	for(int i =0; i<3;i++){
		static_use(b);
	}
	for(int i =0; i<2;i++){
		static_use1(b);
	}
	static_use1(b);
}
