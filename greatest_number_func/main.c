#include <stdio.h>

int findGreatest(a,b,c){
    return (a>b)? (a>c? a : c) : (b>c? b:c);

}
int main(){
    int n1,n2,n3;
    printf("Enter 3 numbers");
    scanf("%d %d %d", &n1,&n2,&n3);
    printf("%d %d %d \n", n1, n2, n3);
    printf ("%d", findGreatest(n1,n2,n3));

}