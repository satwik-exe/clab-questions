#include <stdio.h>

int main(){
    int n,sum;
    printf("Enter N: ");
    scanf("%d", &n);

    for(int i=0;i<=n;i++)
        sum=i*(i+1)/2;
    printf("Sum= %d",sum);
}