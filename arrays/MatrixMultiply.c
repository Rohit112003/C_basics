#include<stdio.h>
int main(){
    int A[3][3] ,B[3][3], C[3][3], x,y,z;
    printf("Enter first Matrix");
    for(x=0;x<3;x++){
        for(y=0;y<3;y++){
            printf("Enter the number:");
            scanf("%d" , &(*(*(A+x)+y)));
        }
    }
    printf("Enter second Matrix");
    for(x=0;x<3;x++){
        for(y=0;y<3;y++){
            printf("Enter the number:");
            scanf("%d" , &(*(*(B+x)+y)));
        }
    }
    for(x=0;x<3;x++){
        for(y=0;y<3;y++){
           (*(*(C+x)+y)) = 0;
            for(z=0;z<3;z++){
                (*(*(C+x)+y)) = (*(*(C+x)+y)) + (*(*(A+x)+z)) * (*(*(B+z)+y));
            }
        }
    }
    for(x=0;x<3;x++){
        for(y =0; y<3;y++){
            printf("%5d", (*(*(C+x)+y)));
        }
        printf("\n");
    }

}