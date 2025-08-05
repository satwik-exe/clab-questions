#include <stdio.h>

int main() {
int b,p,i,res=1;
printf("enter the base followed by power");
scanf("%d %d", &b,&p);
for(i=1;i<=p;i++){
    res=res*b;

}
printf("%d",res);
}
