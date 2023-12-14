#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printReverse(char *arr, int length) {
    char *newSpace = (char*)malloc(length * sizeof(char));
    int k = 0;
    for (int i = length - 1; i >= 0; i--) {
        newSpace[k] = arr[i];
        k++;
    }
    for (int i = 0; i < length; i++) {
        printf("%c", newSpace[i]);
    }
    free(newSpace);
}
int main() {
    char arr[50];
    printf("Enter the string: ");
    // Use fgets to read a line
    fgets(arr, sizeof(arr), stdin);

    int length = strlen(arr);

    printReverse(arr, length);

    return 0;
}
