#include<stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int fact = 1;
    for ( int i = 1; i < n+1; i++) {
        fact = fact * i;
    }
    printf("%d! = %d", n, fact);
    return 0;
}