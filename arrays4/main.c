#include <stdio.h>

int Counter(int arr[], int size, int num){
    int c=0;
    for(int i=0;i<size; i++){
        if(arr[i]==num)
            c++;
    }
    return c;
}
int main() {
    int array[10];
    printf("Enter your numbers: ");
    for (int i = 0; i < 10; ++i) {
        scanf(" %d", &array[i]);
    }
int number;
    printf("Enter your specified number: ");
    scanf(" %d", &number);
    int counter;
    counter=Counter(array, 10,number);
    printf("The number has repeated %d times", counter);

}