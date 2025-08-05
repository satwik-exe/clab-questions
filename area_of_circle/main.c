#include <stdio.h>

int main() {
    int r;
    printf("Enter the radius: ");
    scanf("%d", &r);

    double areaofcircle= 3.14*r*r;
    printf("%.2f sq.m\n", areaofcircle);
    return 0;
}
