#include <stdio.h>
#include <string.h>
#include<string.h>
int main() {
    int start, end,sta,en;
    int small = 100;
    int tem = 0;
    int temp=0;
    int large = 0;
    char C[100];
    char str[100];
    printf("Enter the Sentence");
    scanf("%[^\n]%*c", C);
    int size = strlen(C);
    for (int x = 0; x < size; x++) {
        if (C[x] == ' ') {
            int index = x;
            int length = (index - temp - 1);
            if (length > large) {
                start = temp;
                end = x;
                large = length;
            }
            temp = x;
        }
    }
    printf("largest ");
    for (int i = (start + 1); i < end; i++) {
        printf("%c", C[i]);
    }
    strcpy(str,C);
    for (int j = 1; j < size; j++) {
        if (C[j] == ' ') {
            int index = j;
            int length = (index - tem - 1);
            if (length < small) {
                sta = tem;
                en = j;
                small = length;
            }
            tem = j;
        }


    }
    printf("\n smallest ");
    for (int i = (sta + 1); i < en; i++) {
        printf("%c", str[i]);
    }
}