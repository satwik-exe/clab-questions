#include <stdio.h>
int is_palindrome(char str[], int start, int end){
    if(start>=end){
        return 1;
    }else {
        return (str[start]==str[end])&&is_palindrome(str,start+1, end-1);
    }
}
int main() {

}
