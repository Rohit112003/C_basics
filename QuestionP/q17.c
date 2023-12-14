#include <stdio.h>

struct Demo {
    char name[50];
    int age;
    float height;
} dem = {"Rohit", 20, 6.01}, dem2 = {"John", 25, 5.11};

int main() {
    printf("%s\n", dem.name);
    printf("%d\n", dem.age);
    printf("%f\n", dem.height);

    return 0;
}
