#include<stdio.h>

struct student{
	char name[30];
	int roll;
	int mark[5];
};

int main(){
	float sum = 0;
	struct student std_info[3];
	for(int i =0; i<3; i++){
		scanf("%s", std_info[i].name);
		scanf("%d", &std_info[i].roll);
		for(int j =0; j<5; j++){
			scanf("%d", &std_info[i].mark[j]);
		}
	}
	
	struct student *ptr;
	ptr = std_info;
	for(int i = 0; i < 3; i++){
		printf("Name: %s\n", (ptr+i)->name);
		printf("Roll: %d\n", (ptr+i)->roll);
		for(int j =0; j < 5; j++){
			sum+=(ptr+i)->mark[j];
		}
		sum/=5.0;
		printf("Average is %.1f\n", sum);
		sum = 0;
	}
}
