#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int rev = n%10;
    n = (n - (n%10))/10;
    while (n != 0) {
        rev = rev*10 + (n%10);
        n = (n - (n%10))/10;
    }
    printf("Reverse of number = %d", rev);
    return 0;
}