#include<stdio.h>

void main(){
	float p,s = 0;
	int n = 0;
	
	for(float i = 1; i < 100; i = i + 2){
		if(n%2 == 0){
			s = s + (1/i); 
		} else {
			s = s - (i/i);
		}	
		
	}
	
	printf("%f\n",s);
	
}
