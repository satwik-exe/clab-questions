#include <stdio.h>
#include <string.h>

int main() {
    printf("enter a sentence :");
    char str[100];
    scanf("%[^\n]%*c", str);

    int length=strlen(str);

    for(int i=0;i<length;i++){
        char ch=str[i];
        int asc=ch;
        if((asc>=65 && asc<=90) || (asc>=97 && asc<=122))
        printf("%c",ch);
    }
}
