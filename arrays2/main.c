#include <stdio.h>
int main(){
int arr[5];
    printf("Enter your numbers: ");
     for(int i=0;i<5; ++i){
         scanf(" %d", &arr[i]);
     }
int sum;
sum=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
printf("Sum: %d\n",sum );

int average=sum/5;
printf("Average: %d", average);
}