#include<stdio.h>
int main(){
    int marks = 90;
    printf("Enter the marks");
    scanf("%d", &marks);
    int score = (marks/100)*100;
    // printf("%d",score);
    switch(marks)
    {
    case 90 ... 100:
        printf("you  got A");
        break;
    
    case 80 ... 89:
        printf("you  got B");
        break;
    
    case 70 ... 79:
        printf("you  got C");
        break;
    
    case 60 ... 69:
        printf("you  got D");
        break;
    
    default:
        break;
    }
}