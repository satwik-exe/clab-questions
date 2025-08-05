#include <stdio.h>

float CalculateCircleArea(float r){
    const float pi=3.14;
    return pi*r*r;
}
int main(){
    float r,area;

    printf("Enter the radius: \n");
    scanf(" %f", &r);

    area= CalculateCircleArea(r);
    printf("Area of circle is: %.2f", area);


}
