#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int p[n], bt[n], wt[n], tat[n];
    float awt = 0, atat = 0;

    printf("Enter process numbers: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &p);
    }

