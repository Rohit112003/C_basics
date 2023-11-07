#include<stdio.h>

void printR(int n){
	if(n == 1){
		return;
	}
	
	printf("Rishab Jha\n");
	return printR(n-1);
}


void main(){
	printR(21);

}
