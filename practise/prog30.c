#include <stdio.h>
#include <string.h>

void main(){
	//char str[20] = "OSW Class";
	//char newstr[30];
	//char *p = strcpy(newstr, str);
	//printf("Original: %s\n", str);
	//printf("Copied: %s\n", newstr);
	//printf("Returned string is: %s\n", p);
	
	char first[10];
	char second[20];
	
	printf("Enter your first string: ");
	scanf("%s", first);
	printf("Enter your second string: ");
	scanf(" %s", second);
	char temp[strlen(first)+strlen(second)+2];
	strcpy(temp, first);
	temp[strlen(first)] = ' ';
	strcpy(&temp[strlen(first)+1], second);
	printf("%s\n", temp); 
	//for(int i=0;i<strlen(first)+strlen(second)+2;i++)
		//printf("%c ", temp[i]);
}
