#include <stdio.h>
int main() {
    int n;
    printf("Number? : ");
    scanf("%d", &n);
    printf("%d! = %d \n", n ,fact(n));
    return 0;
}
int fact(n) {
    int m = 1;
    for (int i = 2; i < n+1; i++) {
        m = m * i;
    }
    return m;
}