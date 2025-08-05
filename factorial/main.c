#include <stdio.h>

int main() {
   int n;
   int f=1;
   scanf("%d", &n);
   for(int i=1;i<=n;++i) {
       f=f*1;

   }
   printf("%d\n",f);

   while(n>1){
       f=f*n;
       n=n-1;
   }
}
