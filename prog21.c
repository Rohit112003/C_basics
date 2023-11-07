#include<stdio.h>

int add_5(int *p){
	for(int i = 0; i<4; i++){
		*(p+i) = *(p+i) + 5;
	}
	return *p;
}


void main(){
	//int a=1, b=2, c=3, d=4;
	//printf("Addresss of a is %p\n", &a);
	//printf("Addresss of b is %p\n", &b);
	//printf("Addresss of c is %p\n", &c);
	//printf("Addresss of d is %p\n", &d);
	//int *p;
	//p = &a;
	//printf("value at p %p = %d\n",p, *p);
	//printf("value at p %p = %d\n",p+1, *(p+1));
	//printf("value at p %p = %d\n",p+2, *(p+2));
	//printf("value at p %p = %d\n",p+3, *(p+3));
	
	int arr[4] = {1, 2, 3, 4};
	//add_5(arr);  
	add_5(&arr[0]);
 	for(int i = 0; i<4; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	//arr[0]=1, arr[1]=2, arr[2]=3, arr[3]=4;
	//printf("addr of a = %p\n",arr);
	//printf("value at %p = %d\n", &arr[0], arr[0]);
	// same as above :)
	//printf("value at %p = %d\n", arr+0, *(arr+0));
	//printf("value at %p = %d\n", &arr[1], arr[1]);
	//printf("value at %p = %d\n", &arr[2], arr[2]);
	//printf("value at %p = %d\n", &arr[3], arr[3]);
}
