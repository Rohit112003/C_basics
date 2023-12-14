#include <stdio.h>

void mergeArr(int *arr, int *arr1, int *size) {
    int length = *size + *size;
    int arr2[length];
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < *size && j < *size) {
        if (arr[i] < arr1[j]) {
            arr2[k] = arr[i];
            i = i + 1;
        } else {
            arr2[k] = arr1[j];
            j = j + 1;
        }
        k = k + 1;
    }
    while (i < *size) {
        arr2[k] = arr[i];
        i = i + 1;
        k = k + 1;
    }
    while (j < *size) {
        arr2[k] = arr1[j];
        j = j + 1;
        k = k + 1;
    }

    for (int i = 0; i < length; i++) {
        printf("%d ", arr2[i]);
    }
}

int main() {
    int arr[5] = {12, 20, 24, 32};
    int arr1[5] = {7, 8, 65, 105, 112};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeArr(arr, arr1, &size);

    return 0;
}
