#include <stdio.h>
#include <string.h>

void main(){
	char str[100];
	int count=0;
	int n = scanf(" %s", str);
	while(n != -1){
		if(strcmp(str, "am")==0){
		count+=1;
		}
		n = scanf(" %s", str);
	}
	printf("%d\n", count);
}
