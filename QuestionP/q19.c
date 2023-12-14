#include<stdio.h>
#include<string.h>
struct Demo{
    char arr[50];
    int age;
    int height;
};

int main(){
struct Demo dem;
    strcpy(dem.arr,"Rohit");
    // dem.name= {"Rohit"};
    dem.age =20;
    dem.height = 6;
    printf("%s\n", dem.arr);
    printf("%d\n", dem.age);
    printf("%f\n", dem.height); 
}