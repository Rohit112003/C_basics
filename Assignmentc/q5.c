#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world-this is a test";
    const char delim[] = " ";

    char *token = strtok(str, delim);
    
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }
    return 0;
}
