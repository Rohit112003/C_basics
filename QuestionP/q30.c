#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apples";
    char str2[] = "applesauce";

    int result = strncmp(str1, str2, 5);

    if (result == 0) {
        printf("The first 5 characters of both strings are equal.\n");
    } else if (result < 0) {
        printf("The first 5 characters of str1 come before str2 in lexicographical order.\n");
    } else {
        printf("The first 5 characters of str1 come after str2 in lexicographical order.\n");
    }

    return 0;
}
