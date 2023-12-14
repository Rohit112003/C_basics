#include <stdio.h>

int copyDistinct(int arr[], int size, int destination[]) {
    int destinIndex = -1;
    for (int i = 0; i < size; i++) {
        int isDistinct = 1;
        for (int j = 0; j <= destinIndex; j++) {
            if (arr[i] == destination[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (isDistinct) {
            destination[++destinIndex] = arr[i];
        }
    }
    return destinIndex + 1; 
}

int main() {
    int arr[7] = {4, 7, 7, 3, 2, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int destination[size];
    int outputSize = copyDistinct(arr, size, destination);
    printf("Distinct elements: ");
    for (int i = 0; i < outputSize; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    return 0;
}
