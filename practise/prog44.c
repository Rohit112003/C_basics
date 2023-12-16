#include <stdio.h>
#include <math.h>

struct sci_not_t {
    double mantissa;  
    int exponent;     
};

void scan_sci(struct sci_not_t *sci) {
    char input[50];
    printf("Enter a positive number in scientific notation : ");
    scanf("%s", input);
    sscanf(input, "%lf%*c%d", &sci->mantissa, &sci->exponent);

void print_sci(struct sci_not_t sci) {
    printf("%.5fe%d\n", sci.mantissa, sci.exponent);
}

struct sci_not_t sum_sci(struct sci_not_t a, struct sci_not_t b) {
    struct sci_not_t result;
    result.mantissa = a.mantissa * pow(10, a.exponent - b.exponent) + b.mantissa;
    result.exponent = b.exponent;  
    return result;
}

struct sci_not_t diff_sci(struct sci_not_t a, struct sci_not_t b) {
    struct sci_not_t result;
    result.mantissa = a.mantissa * pow(10, a.exponent - b.exponent) - b.mantissa;
    result.exponent = b.exponent;  
    return result;
}

struct sci_not_t product_sci(struct sci_not_t a, struct sci_not_t b) {
    struct sci_not_t result;
    result.mantissa = a.mantissa * b.mantissa;
    result.exponent = a.exponent + b.exponent;
    return result;
}


struct sci_not_t quotient_sci(struct sci_not_t a, struct sci_not_t b) {
    struct sci_not_t result;
    result.mantissa = a.mantissa / b.mantissa;
    result.exponent = a.exponent - b.exponent;
    return result;
}

int main() {
    struct sci_not_t value1, value2;
    scan_sci(&value1);
    scan_sci(&value2);
    printf("Values input: ");
    print_sci(value1);
    printf(" ");
    print_sci(value2);
    struct sci_not_t sum = sum_sci(value1, value2);
    struct sci_not_t difference = diff_sci(value1, value2);
    struct sci_not_t product = product_sci(value1, value2);
    struct sci_not_t quotient = quotient_sci(value1, value2);
    printf("Sum: ");
    print_sci(sum);
    printf("Difference: ");
    print_sci(difference);
    printf("Product: ");
    print_sci(product);
    printf("Quotient: ");
    print_sci(quotient);
    return 0;

}


