#include<stdio.h>
char findGrade(float res){
	if(res > 90){
		return('O');
	} else if(90 >=res > 80) {
		return('A');
	} else if(80 >=res > 70) {
		return('B');
	} else if(70 >=res > 60) {
		return('C');
	} else if(60 >=res > 50) {
		return('D');
	} else {
		return('F');
	}
}
void main(){
	int no, mark; 
	scanf("%d",&no);
	float result; 
	for(int i = 0; i < no; i++){
		scanf("%d",&mark);
		result = ((mark) / 150.0) * 100;
		printf("Student %d percentage is %.2f\n",i,result);
		printf("Grade of Student %d is %c\n",i,findGrade(result));
	}
	
}
