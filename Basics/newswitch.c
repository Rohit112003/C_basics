#include <stdio.h>

int main() {
    float marks;
    printf("Enter the marks: ");
    scanf("%f", &marks);

    // Assuming a 100-point scale, convert the score to a percentage
    float percentage = (marks / 100) * 100;

    char grade;

    if (percentage >= 90 && percentage <= 100) {
        grade = 'A';
        printf("You got A");
    } else if (percentage >= 80 && percentage < 90) {
        grade = 'B';
        printf("You got B");
    } else if (percentage >= 70 && percentage < 80) {
        grade = 'C';
        printf("You got C");
    } else if (percentage >= 60 && percentage < 70) {
        grade = 'D';
        printf("You got D");
    } else {
        grade = 'F';
        printf("You got F");
    }

    return 0;
}
