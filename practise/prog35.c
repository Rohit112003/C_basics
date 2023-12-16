#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	for(int i = 1; i < argc; i++){
		printf("%s\n",argv[i]);
	}																																																	
	int count = 0, chars = 0, wods = 0;;
	char *word, *line, *rest_line, *rest_word;
	line = strtok_r(argv[1], "\n", &rest_line);
	while(line != NULL){
		count+=1;
		word = strtok_r(line, " ", &rest_word);
		while (word != NULL){
			wods+=1;
			chars+=strlen(word);
			word = strtok_r(NULL, " ", &rest_word);
		}
		line = strtok_r(NULL, "\n", &rest_line);
	}
	
	printf("Total lines, words and characters are %d %d %d\n", count, wods, chars);
	float result = wods/count;
	printf("Average words per line is %.1f\n", result);
	return 0;
}
