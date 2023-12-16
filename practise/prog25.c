#include<stdio.h>

int multiply(int b, int m){
	if(b == m){
		return 0;
	} 
	return 1;

}

void mul(int *p, int *q, int *r,int a, int b, int m, int n){
	for(int i = 0; i < a; i++){
		for(int j = 0; j < m; j++){
			 *(r+(i*n)+j) = 0;
			 for(int k = 0; k < m; k++){
			 	*(r+(i*n)+j)+= (*(p+(i*b)+k))*(*(q+(k*n)+j));
			 }
		}
	}
	
	
}

void display(int *p, int r, int c){
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			printf("%d ", *(p+(i*r)+j));
		}
		printf("\n");
	}

}

void main(){
	int a, b, m, n;
	scanf("%d %d", &a, &b);
	int arr1[a][b];
	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			scanf("%d", &arr1[i][j]);
		}
	}
	
	scanf("%d %d", &m, &n);
	int arr2[m][n];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &arr2[i][j]);
		}
	}
	
	if(multiply(b, m) == 0){
		int arr[a][n];
		mul(&arr1[0][0], &arr2[0][0], &arr[0][0],a,b, m, n);
		display(&arr[0][0], a, n);
	} else {
		printf("Cannot multiply the given matrices\n");
	}



}
