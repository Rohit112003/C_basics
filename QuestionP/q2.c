#include <stdio.h>
#include <stdlib.h>

char* provideBinary(int a) {
    char *binaryD = (char*)malloc(64 * sizeof(char));
    int k = 0;

        while (a > 0) {
            binaryD[k++] = (a % 2 == 0) ? '0' : '1';
            a /= 2;
        }

        binaryD[k] = '\0'; 
    

    return binaryD;
}

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    char *arr = provideBinary(a);
    printf("Binary representation: %s\n", arr);
    free(arr);

    return 0;
}
