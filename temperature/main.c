#include <stdio.h>

int main() {
    float input, output;
    char option;

    scanf("%c", &option);
    if (option == 'a') {
        printf("into C\n");
        scanf(" %f", &input);
        output = ((9 * input) / 5) + 32;
        printf("in F%.f", output);

    } else if (option == 'b') {
        printf("into F\n");
        scanf(" %.f", &input);
        output = ((float) 5 / 9) * (input - 32);
        printf("in C%.f", output);
    }
}

