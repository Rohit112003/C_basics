#include <stdio.h>

struct student{
char name[30];
float avg;
int roll;
int mark1, mark2, mark3;
};


int main(){
	struct student s1; 
	printf("Enter name: ");
	scanf("%s[^\n]", s1.name);
	printf("Enter roll: ");
	scanf("%d", &s1.roll);
	printf("Enter marks: ");
	scanf("%d %d %d", &s1.mark1, &s1.mark2, &s1.mark3);
	
	s1.avg = (s1.mark1+s1.mark2+s1.mark3)/3.0;
	printf("Student Name = %s\n", s1.name);
	printf("Student Roll = %d\n", s1.roll);
	printf("Student avg mark: %f\n", s1.avg);
}
