#include <stdio.h>

void p_cal(int *q){		
	int age = 2023-*q;
	printf("%d\n", age);
	if(age <= 30) {
		printf("Pay 10000\n");
	} else if(age > 30 && age <= 50){
		printf("Pay 20000\n");
	} else {
		printf("Pay 30000\n");
	}
}

void main(){
	char dob[20];
	printf("Enter your dob: ");
	scanf("%s", dob);
	int dd, mm, yy;
	sscanf(dob, "%d-%d-%d", &dd, &mm, &yy);
	
	switch(mm){
		case 1: sprintf(dob, "%2d-%s-%d", dd, "JAN", yy);
		break;
		case 2: sprintf(dob, "%2d-%s-%d", dd, "FEB", yy);
		break;
		case 3: sprintf(dob, "%2d-%s-%d", dd, "MAR", yy);
		break;
		case 4: sprintf(dob, "%2d-%s-%d", dd, "APR", yy);
		break;
		case 5: sprintf(dob, "%2d-%s-%d", dd, "MAY", yy);
		break;
		case 6: sprintf(dob, "%2d-%s-%d", dd, "JUN", yy);
		break;
		case 7: sprintf(dob, "%2d-%s-%d", dd, "JUL", yy);
		break;
		case 8: sprintf(dob, "%2d-%s-%d", dd, "AUG", yy);
		break;
		case 9: sprintf(dob, "%2d-%s-%d", dd, "SEP", yy);
		break;
		case 10: sprintf(dob, "%2d-%s-%d", dd, "OCT", yy);
		break;
		case 11: sprintf(dob, "%2d-%s-%d", dd, "NOV", yy);
		break;
		case 12: sprintf(dob, "%2d-%s-%d", dd, "DEC", yy);
		break;
	}
	printf("%s\n", dob);
	p_cal(&yy);
}
