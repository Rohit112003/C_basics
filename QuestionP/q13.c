#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 5;
    int start = 0;
    int end = 10;

    while (start < end) {
        int mid = (start + end) / 2;
        if (arr[mid] == target) {
            printf("Number found at index %d\n", mid);
            break;
            
        } else if (arr[mid] > target) {
            end = end - 1;
        } else {
            start = mid + 1;
        }
    }

    return 0;
}
