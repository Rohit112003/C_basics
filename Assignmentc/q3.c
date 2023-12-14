#include<stdio.h>
#include <stdlib.h>
int main(int argc , char * argv[]){
    if(argc==0){
        printf("zero argument passed");
    }
    float val = atof(argv[1]);
    float val1 = atof(argv[2]);

    printf("%f",val+val1);

}