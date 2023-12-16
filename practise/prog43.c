#include<stdio.h>
#include<string.h>

struct element_t {
    int atomic_number;
    char name[50];  
    char chemical_symbol[3];  
    char class[50];  
    double atomic_weight;
    int electrons_in_shells[7];
};

void display(struct element_t *p){
	printf("The atomic number is: %d\n", p->atomic_number);
	printf("The Name of element is: %s\n", p->name);
	printf("The chemical symbol is: %s\n", p->chemical_symbol);
	printf("The class of element is: %s\n", p->class);
	printf("The weight of element is: %f\n", p->atomic_weight);
	for(int i = 0; i < 7; i++){
		printf("%d ", p->electrons_in_shells[i]);
	}
	printf("\n");
}

void scan_function(struct element_t *p){
	scanf("%d", &p->atomic_number);
	scanf("%s", p->name);
	scanf("%s", p->chemical_symbol);
	scanf("%s", p->class);
	scanf("%lf", &p->atomic_weight);
	for(int i = 0; i < 7; i++){
		scanf("%d", &p->electrons_in_shells[i]);
	}
}

int main(){
	struct element_t ele;
	scan_function(&ele);
	display(&ele);
}
