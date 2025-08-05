#include <stdio.h>

int sum(int n){
    if(n>=0 && n<=9){
        return n;
    }else{
        return(n%10)+sum(n/10);
    }
}
int main(){
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    printf("%d", sum(num));
}