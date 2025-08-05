
#include <stdio.h>

int main(){
    int n,dg,sum;
   printf("Enter the number: ");
   scanf("%d", &n);
   while(n!=0){
       dg=n%10;
       sum=sum+dg;
       n=n/10;
   }
   printf("%d", sum);
}