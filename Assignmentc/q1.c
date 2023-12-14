#include <stdio.h>

int binaryToDecimal( char *binaryString) {
    int decimalNumber = 0;
    int power = 1; 
    int length = 0;
    while (binaryString[length] != '\0') {
        length++;
    }
    for (int i = length - 1; i >= 0; i--) {
        if (binaryString[i] == '1') {
            decimalNumber += power;
        }
        power *= 2;
    }
    return decimalNumber;
}

int main() {
    char binaryString[64]; 
    printf("Enter a binary number: ");
    scanf("%s", binaryString);
    int decimalNumber = binaryToDecimal(binaryString);
    printf("Decimal equivalent: %d\n", decimalNumber);
    return 0;
}
