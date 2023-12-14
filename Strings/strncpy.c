#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello";
    char destination[20];
    strncpy(destination, source, 3);
    printf("Destination: %s\n", destination);
    return 0;
}
