#include <stdio.h>

#define max 100

int stack[max];
int top=-1;

void push(int data){
    if(top==max-1){
        printf("overflow");
    }
    top=top+1;
    stack[top]=data;
}

void pop(){
    printf("popped element is %d",stack[top]);
    if(top==-1){
        printf("underflow");
    }top=top-1;
}
int main() {
    int opt;
    int value;
    do{
    printf("main menu\n");
    printf("1. push\n");
    printf("2. pop\n");
    printf("3. exit\n");
    printf("enter option: ");
    scanf("%d",&opt);

    switch(opt){
        case 1:
            printf("enter element to push: ");
            scanf("%d",&value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            printf("exiting..");
            break;
        default:
            printf("invalid");
    }
    }while(opt!=3);
    return 0;
}
