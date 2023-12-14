#include<stdio.h>
int main(){
    int x =3;
    int* z = &x;
    printf("%d\n",&x);
    // x=9;
    //Dereference operator
    *z = 7;//update/change the value
    printf("%d\n",x);
    return 0;

}