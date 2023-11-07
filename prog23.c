#include<stdio.h>

void get_corners(float *p, float *q, int size){
	
	for(int i = 0; i < size; i++){
		scanf("%f %f", &p[i], &q[i]);
	}
}

void output_corners(float *p, float *q, int size){
	printf(" x\t y\n");
	for(int i = 0; i < size; i++){
		printf("%.1f\t%.1f\n", p[i], q[i]);
	}
}


float polygon_area(float *p, float *q, int size, float *result){
	*result = 0;
	if(p[0] != p[size-2] || q[0] != q[size-2]){
		return 0;
	}
	
	for(int i = 0; i <= size-2; i++){
		*result += (p[i+1]+p[i])*(q[i+1]-q[i]);
	}
	
	if(*result < 0)
		*result = *result*(-1);
	*result = *result /2;
	
	return *result;
}
	
	
void main(){
	int size;
	scanf("%d", &size);
	float x[size], y[size];
	float result;
	get_corners(x, y, size);
	output_corners(x, y, size);
	float ans = polygon_area(x, y, size, &result);
	if(ans == 0){
		printf("Area can't be calculated\n");
	} else {
		printf("Area is %.1f\n", ans);
	}
	
}
