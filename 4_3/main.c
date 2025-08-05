#include <stdio.h>
int sum_diag(int[][3],int rows);

int main(){
    int arr[3][3];
    for(int i=0; i<3;++i)
    for(int j=0;j<3; ++j)
        scanf("%d", &arr[i][j]);
    printf(" %d\n", sum_diag(arr,3));
    return 0;
}

int sum_diag(int a[][3], int rows){
    if(rows!=3){
        return -99999;
    }
    int sum=0;
    for(int i=0;i<rows;++i){
        sum+=a[i][i];

    }
        return sum;
}