#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the no. of processes: ");
    scanf("%d", &n);

    int p[n], bt[n], wt[n], tat[n];
    float awt = 0, atat = 0;

    printf("Enter process numbers: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    printf("Enter the burst time of each process: \n");
    for (i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &bt[i]);
    }

    wt[0] = 0;
    for (i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
    }

    for (i = 0; i < n; i++) {
        tat[i] = wt[i] + bt[i];
        awt += wt[i];
        atat += tat[i];
    }

    awt /= n;
    atat /= n;

    printf("Process\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\n", p[i], bt[i], wt[i], tat[i]);
    }

    printf("Average Waiting Time: %.2f\n", awt);
    printf("Average Turnaround Time: %.2f\n", atat);

    return 0;
}