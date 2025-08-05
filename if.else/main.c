#include "stdio.h"

int main(){
int num1;
int num2;
char op;
int res;

printf("enter num1: ");
scanf(" %d", &num1);

    printf("enter num2: ");
    scanf(" %d", &num2);

    printf("enter op: ");
    scanf(" %c", &op);

    //20printf("%d %d %c" , num1,num2,op);

    if(op=='+'){
        res=num1+num2;
        printf("Result = %d\n",res);
    }
        else if(op=='-'){
            res=num1-num2;
        printf("Result = %d\n",res);
        }
        else if(op=='*'){
            res=num1*num2;
        printf("Result = %d\n",res);
        }
        else if(op=='/'){
            res=num1/num2;
        printf("Result = %d\n",res);
        }
        return 0;
}

