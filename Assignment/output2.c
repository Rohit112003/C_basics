#include<stdio.h>
int main(){
    // int a =1;
    // do{
    //     printf("%d", a++);

    // }while(a<10);
    // int i , j , n =5;
    // for(i = 1, j =1; j<=n; i+=2, j++){
    //     printf("%d %d\n " ,i , j);
    // }
    // int count = 11;
    // while(--count+1);
    // printf("count down is %d\n " , count);

    // float x = 1.1;
    // while(x==1.1){
    //     printf("%f\n ", x);
    //     x = x-0.1;
    // }
    int m ,n;
    int count =0;
    int count1 =0;
    // for(m = 9 ; m>0;--m){
    //     for(n =6; n>1;--n){
    //         count++;
    //         printf("#######\n");
    //     }
    // }
    // printf("%d " , count);

    for(m = 10; m>0; --m){
        for(n =m ; n>1; --n){
            count++;
            printf("%d",  m + n);
        }

        count1++;
        printf("\n");

    }
    printf("%d %d ", count,count1);
}