#include<stdio.h>

int main() {
    int m = 90;
    int n = 85;

    int min = 0; 
    if (m > n) {
        min = n;
    } else {
        min = m;
    }

    int high = 0;
    for (int i = 1; i <= min; i++) {
        if (n % i == 0 && m % i == 0) {
            high = i;
        }
    }

    printf("%d", high);

    return 0;
}
