#include<stdio.h>
#include<math.h>
#define bmiCalculator(ht, wt) ((703 * wt)/pow(ht,2))
void main(){

	float wt,ht;
	
	printf("Enter height and weight respectively: ");
	scanf("%f %f", &ht, &wt);
	
	float result = bmiCalculator(ht,wt);
	printf("Bmi is %.2f\n",result);
	if(result<18.5){
		printf("Underweight\n");
	} else if(result>=18.5 && result<24.9){
		printf("Normal\n");
	} else if(result>=25 && result<29.9){
		printf("Overweight\n");
	} else {
		printf("Obese\n");
	}

}
