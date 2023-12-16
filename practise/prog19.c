#include<stdio.h>

void naturalNumber(int n){
	if(n == 0){
		return;
	}
	else {
	naturalNumber(n-1);
	printf("%d\n",n); }
}

void printfibo(int m, int n, int max, int count){
	if(count > max){ return ;}
	else {
	printf("%d ",m);
	printfibo(m, m+n, max, count+1);
	}
}

int fact(int n){
	if(n==0){return 1;}
	
	return n*fact(n-1);
}


void binary(int n){
	if(n == 0){return ;}
	
	binary(n/2);
	printf("%d ",n%2);

}

int prime(){}

void main(){
	//naturalNumber(10);
	//printfibo(1,1,5,1);
	//printf("Factorial is %d\n",fact(4));
	binary(56);
}
