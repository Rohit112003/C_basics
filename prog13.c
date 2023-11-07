#include<stdio.h>
#include<math.h>

void main(){
	float n,a = 3.952*1000000, b = 0.0427*1000, R = 0.08206*1000;
	int t, iV, fV, inc;
	scanf("%f",&n);
	scanf("%d",&t);
	scanf("%d",&iV);
	scanf("%d",&fV);
	scanf("%d",&inc);
	printf("Volume (ml)\t Pressure (atm)\n");
	for(int i = iV; i <= fV; i = i + inc){
		float pres = ((n*R*t) / (i - b*n)) - ((a*pow(n,2))/pow(i,2));
		printf("\t%d\t%f\n",i,pres);		
			
	}	
}
