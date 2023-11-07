#include<stdio.h>
char main(){
float a,b,c,d,e;
c=0.35;
printf("reimbersment calculator");
printf("Begining odometer reading=> $");
scanf("%f" ,&a);
printf("Ending  odometer reading=> $");
scanf("%f" ,&b);

d =b-a;
e =d*c;
printf("Distance travelled %.1f miles  ",d);
printf("at $%.2f per mile \n",c);
printf("Your reimbersment is $ %.2f\n",e);
return 0;
}




