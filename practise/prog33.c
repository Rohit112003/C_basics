#include <stdio.h>
#include <string.h>
//void main(int argc, char *argv[]){
//int count = 0;
//	for(int i = 0; i < argc; i++){
//		for(int j = 0; j < strlen(argv[1]); j++){
///			if(argv[1][j] == argv[2][0]){
//			count+=1;
//		   }
//		}
//	}
//	printf("%d\n", count);

//}

void main(int argc, char *argv[]){
	char *word;
	int count = 0;
	word = strtok(argv[1], " ");
	while(word != NULL){
		if(strcmp(argv[2], word) == 0)
			count+=1;
		word = strtok(NULL, " ");
	}
	
	printf("Number of tokens %d\n", count);
}
