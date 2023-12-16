#include<stdio.h>
#include<string.h>

int main(){
    char pres[20]="Siksha O Anusandhan";
char first[20], last[20];
strncpy(first, pres, 2);
// first[2] = "\0";
printf("%s", first);
// printf(" %s", strcpy(last, &pres[7]));
// strncpy(first, &pres[7], 2);
// first[2] = "\0";
// strncpy(last, &pres[14], 2);
// last[2] = "\0";
// printf(" %s%s\n", first, last);
}