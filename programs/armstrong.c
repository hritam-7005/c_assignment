#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int m = n;
    int sum = 0;
    while (n != 0) {
        sum = sum + (int)pow((n%10),3);
        n = (n - (n%10))/10;
    }
    if (sum == m) {
        printf("%d is a Armstrong Number.\n",m);
    } else {
        printf("%d is not a Armstrong Number.\n",m);
    }
    return 0;
}