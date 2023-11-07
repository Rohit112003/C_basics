#include<stdio.h>

void main(){
	int arr[2][3] = {{1,2,3}, {4,5,6}};
	
	printf("Row measure: \n");
	for(int i = 0; i<2; i++){
		for(int j = 0; j<3; j++){
			printf("%d ",arr[i][j]);	
		}
		printf("\n");
	}
	
	//printf("Column measure: \n");
	//for(int j = 0; j < 3; j++){
	//	for(int i = 0; i < 2; i++){
	//		printf("%d ",arr[i][j]);
	//	}
	//	printf("\n");
	//}
	
	int (*p)[3];
	p = arr;
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			//printf("%d ", p[i][j]);
			printf("%d ", *(*(p+i)+j));
		}
		printf("\n");
	}
	

}
