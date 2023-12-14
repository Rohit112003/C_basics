#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* stringConcat(char *strinChar,  char *stringChar1) {
    int val = strlen(strinChar);
    int val1 = strlen(stringChar1);
    int fval = val + val1;
    char *newVAl = (char *)malloc((fval + 1) * sizeof(char));

    for (int i = 0; i < val; i++) {
        newVAl[i] = strinChar[i];
    }
    for (int i = 0; i < val1; i++) {
        newVAl[val + i] = stringChar1[i];
    }
    newVAl[val + val1] = '\0';

    return newVAl;
}

int main() {
    char stringChar[] = "hello from my side";
    char stringChar1[] = " I am Rohit Kumar"; 
    char *finalVal = stringConcat(stringChar, stringChar1);

    printf("Concatenated string: %s\n", finalVal);
    free(finalVal);

    return 0;
}
