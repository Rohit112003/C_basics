#include<stdio.h>

//void swap(int *x, int *y){
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}


int* sum(int *a, int *b){
	*a= *a+*b;
	return(a);
}


void main(){
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a, &b);
	//printf("Before Swap A = %d and B = %d\n",x, y);
	//swap(&x,&y);
	//printf("After Swap A = %d and B = %d\n",x, y);
	int *c = sum(&a,&b);
	printf("Sum is %d\n", a);
}

//void main(){
	//int a = 5;
	//printf("Value in a = %d\n",a);
	//printf("Size in a = %ld\n",sizeof(a));
	//printf("Address of a = %p\n",&a);

	//int *p;
	//p = &a;
	//printf("Value in a = %p\n",p);
	//printf("Size in a = %ld\n",sizeof(p));
	//printf("Address of a = %p\n",&p);

	
//}
