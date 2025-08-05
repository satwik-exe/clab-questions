#include <stdio.h>

int main() {
    int l;
    int b;
   printf("Enter the length: ");
   scanf("%d", &l);
   printf("Enter the breadth: ");
   scanf(" %d", &b);

   double perimeter=2*(l+b);

   printf("Perimeter of rectangle= %.2f meters\n", perimeter);
   return 0;
}
