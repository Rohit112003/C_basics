#include<stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    float f1, f2;
    f1= atof(argv[1]);
    f2= atof(argv[2]);
    printf("%f", f1+f2);
}