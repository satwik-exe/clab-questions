#include <stdio.h>
int main() {
 int array[10];
    printf("Enter your numbers: ");
    for (int i = 0; i < 10; ++i) {
        scanf(" %d", &array[i]);
    }
    int num;
    printf("Enter your number: ");
    scanf(" %d", &num);
    int p=0;

    for(int i=0;i<10;i++ ){
     if(array[i]==num){
         p=i;
         break;
     }

 }
    if(p==0){
        printf("not found");
    }
    else{
        printf("found at %d pos",p+1);

    }
    return 0;

}