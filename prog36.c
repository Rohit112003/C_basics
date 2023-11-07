#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(int argc, char *argv[]){
	char str[strlen(argv[1])+1];
	strcpy(str, argv[1]);
	
	char *line, *word;
	int lc, wc = 0;
	for(line = strtok(str,"\n"),lc=0; line!=NULL; line = strtok(NULL, "\n"), lc++);
	
	for(int i = 0; i<lc; i++){
		strcpy(str, argv[1]);
		int lc_n;
		for(line=strtok(str, "\n"), lc_n=0; lc_n<i; line = strtok(NULL, "\n"), lc_n++);
		
		for(word=strtok(line," "); word!= NULL; word=strtok(NULL," "))
			wc+=1;
	}
}
