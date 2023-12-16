#include <stdio.h>

void main(int argc, char *argv[]){
	printf("The size of argument: %d\n", argc);
	printf("The following are the arguments passed: \n");
	for(int i = 1; i < argc; i++){
		printf("%s\n", argv[i]);
	}
	
}
