#include<stdio.h>
struct demo{
    int a; int b;
    int c;
};
int main(){
    struct demo dem = {10,20,30};
    struct demo *ptr = &dem;
    ptr->a+=10;
    ptr->b+=10;
    ptr->c+=10;
    // printf("%d ",dem.a );
    // printf("%d ",dem.b );
    // printf("%d ",dem.c);
    printf("%d ",ptr->a );
    printf("%d ",ptr->b );
    printf("%d",ptr->c );
    return 0;
}