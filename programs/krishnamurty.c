#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int m = n;
    int sum = 0;
    while (n != 0) {
        sum = sum + fact(n%10);
        n = (n - (n%10))/10;
    }
    if (sum == m) {
        printf("%d is a Krishnamurty Number.\n",m);
    } else {
        printf("%d is not a Krishnamurty Number.\n",m);
    }
    return 0;
}
int fact(n) {
    int m = 1;
    for (int i = 2; i < n+1; i++) {
        m = m * i;
    }
    return m;
}