#include<stdio.h>

struct student{
	char name[30];
	int roll;
	int mark[5];
};

int main(){
	struct student std_info;
		scanf("%s", std_info.name);
		scanf("%d", &std_info.roll);
		for(int j =0; j<5; j++){
			scanf("%d", &std_info.mark[j]);
		}
	struct student *ptr;
	ptr = &std_info;
	
	printf("Name: %s\n", ptr->name);
	//printf("Name: %s\n", &(std_info).name); //all the three means the same
	//printf("Name: %s\n", (*ptr).name);
	for(int j =0; j<5; j++){
			printf("%d ", ptr->mark[j]);
		}
	printf("\n");
}
