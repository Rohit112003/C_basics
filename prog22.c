#include<stdio.h>

int findInt(int *p){
	int max = *(p+0);
		
	for(int i = 0; i <= 19; i++){
		if(max < *(p+i)){
			max = *(p+i);
		}
	}
	
	return max;
}


void main(){
	int arr[20];
	for(int i = 0; i<20; i++){
		scanf("%d", &arr[i]);	
	}
	int res = findInt(arr);
	printf("Max value is %d\n", res);
}
