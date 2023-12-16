#include <stdio.h>

struct student {
	char name[30];
	int roll;
	int mark[5];
	float avg;
};

void main(){
	struct student s1;
	scanf("%s", s1.name);
	scanf("%d", &s1.roll);
	for(int i = 0; i < 5; i++){
		scanf("%d", &s1.mark[i]);
	}
	int sum = 0;
	for(int i = 0; i < 5; i++){
		sum += s1.mark[i];
	}
	s1.avg = sum/5.0;
	
	printf("Name= %s\n", s1.name);
	printf("Roll= %d\n", s1.roll);
	printf("Avg of 5 marks= %.2f\n", s1.avg);	

}
