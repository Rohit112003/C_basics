#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct demo{
    char * name;
    int * age;
    float *height;
};
int main(){
    struct demo dem;
    dem.name = (char *)malloc(50*sizeof(char));
    dem.age = (int*)malloc(sizeof(int));
    dem.height= malloc(sizeof(float));

    strcpy(dem.name, "Jane Doe");
    *dem.age = 30;
    *dem.height = 1.65;


    printf("Age: %d\n", *dem.age);
    printf("Height: %.2f meters\n", *dem.height);

    free(dem.name);
    free(dem.age);
    free(dem.height);
}