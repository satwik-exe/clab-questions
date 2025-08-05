#include <stdio.h>

int main(){
    int n,dg,rev=0;
    printf("Enter your number: ");
    scanf("%d",&n);
    int temp=n;
while(n!=0){
    dg=n%10;
    rev=rev*10+dg;
    n=n/10;

}
if(temp ==rev){
    printf("%d is a palindromic number", temp);

}else printf("%d is not a palindromic number", temp);
}