#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(int argc, char* argv[]){
	char *date;
	date = strtok(argv[1], "-");
	date = strtok(NULL, "-");
	int a = atoi(date);
	switch(a){
		case 1: printf("JAN\n");
		break;
		case 2: printf("FEB\n");
		break;
		case 3: printf("MAR\n");
		break;
		case 4: printf("APR\n");
		break;
		case 5: printf("MAY\n");
		break;
		case 6: printf("JUN\n");
		break;
		case 7: printf("JUL\n");
		break;
		case 8: printf("AUG\n");
		break;
		case 9: printf("SEP\n");
		break;
		case 10: printf("OCT\n");
		break;
		case 11: printf("NOV\n");
		break;
		case 12: printf("DEC\n");
		break;
	}
}
