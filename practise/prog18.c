#include<stdio.h>

int lcm(int n1, int n2){
	 if (n2 != 0)
        return lcm(n2, n1 % n2);
    else
        return n1;
}




void main(){
	int n1,n2;
	printf("Enter two integers: ");
	scanf("%d %d",&n1,&n2);
	printf("LCM of %d and %d is %d\n", n1, n2, (n1*n2)/lcm(n1,n2));

}
