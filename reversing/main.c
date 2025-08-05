#include <stdio.h>

int main() {
    int N,dg, rev=0;
    printf("Enter the number: ");
    scanf("%d", &N);
    while(N!=0)
    {
       dg=N%10;
       rev=rev*10+dg;
       N=N/10;

    }
    printf(" %d",rev);
    return 0;


   }
