#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatenate(char *arr, char *arr1, int length) {
    char *full = (char*)malloc(length * sizeof(char));
    for (int i = 0; i < length; i++) {
        full[i] = arr[i];
    }
    for (int i = 0; i < length; i++) {
        full[i] = arr1[i];
    }
    for (int i = 0; i < 2 * length; i++) {
        printf("%c", full[i]);
    }

    free(full); 
}

int main() {
    char arr[] = "My name is Rohit";
    char arr1[] = "I study in Bhubaneshwar";

    int length = strlen(arr);
    int length1 = strlen(arr1);
    int totalLength = length + length1;

    concatenate(arr, arr1, totalLength);

    return 0;
}
