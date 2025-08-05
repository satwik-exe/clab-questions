#include <stdio.h>

struct complex {
    float real;
    float imag;
};
typedef struct complex complex;

complex add(complex x, complex y) {
    complex result;
    result.real = x.real + y.real;
    result.imag = x.imag + y.imag;
    return result;
}

int main() {
    complex x, y, sum;
    printf("Enter the real and imaginary parts of complex numbers separated by a space:");
    scanf("%f %f", &x.real, &x.imag);
    printf("Enter for second number in same format:");
    scanf("%f %f", &y.real, &y.imag);
    sum = add(x, y);
    printf("%f\n", sum.real);
    printf("%f\n", sum.imag);
}