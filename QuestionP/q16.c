#include<stdio.h>
// int main(){
//     int a[] = {120,502,118, 188,106,447};
//     int length = sizeof(a)/sizeof(a[0]);
//     int *ptr = a;
//     for(int i =0;i<length;i++){
//         printf("%d ", *(ptr+i));
//     }
//     printf("%d", ptr);

// }

int main(){
    int *ptr_a;
    int a =20;
    ptr_a=&a;
    printf("%d",*ptr_a);
    
}