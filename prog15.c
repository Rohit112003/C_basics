#include<stdio.h>


int calculate(int n){
	if(n == 1){
		return(1);
	}
	
	return n + calculate(n-1);
}

void main(){
	int n; 
	//int sum = 0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	//for(int i = 1; i <= n; i++){
		//sum+=i;
	//}
	
	//printf("%d\n",sum);
	
	printf("%d\n",calculate(n));
}
