#include<stdio.h>
#include<string.h>
struct Demo{
    char name[50];
    int age;
    float height;
} dem;

int main(){
    dem.height = 5.6;
    dem.age = 34;
   strcpy(dem.name, "Rohit");
      printf("%s\n", dem.name);
    printf("%d\n", dem.age);
    printf("%f\n", dem.height); 


}