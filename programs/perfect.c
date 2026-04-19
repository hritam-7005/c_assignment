#include<stdio.h>
int main() {
    int n;
    printf("Enter number to check: ");
    scanf("%d", &n);
    int i = 1;
    int sum = 0;
    while (i < n) {
        sum = sum + ((n%i == 0) ? i : 0);
        i = i + 1;
    }
    if (sum == n) {
        printf("%d is a Perfect number.", n);
    } else {
        printf("%d is not a Perfect number.", n);
    }
}