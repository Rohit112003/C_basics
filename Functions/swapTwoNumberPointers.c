#include<stdio.h>
int main(){
    int x =3;
    int y = 4;
    fun(&x,&y);
    printf("%d x=4 and %d y =3 ", x,y);
}
//integer ka address aaraha hai
void fun(int* x, int* y){
    int temp = *x; // uss address ke andar jo value haoi wo mil raha hai
    *x = *y;
    *y = temp;
    return;
}