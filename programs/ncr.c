#include <stdio.h>
int main() {
    int n,r;
    printf("n : ");
    scanf("%d", &n);
    printf("r : ");
    scanf("%d", &r);
    printf("%dC%d = %d \n", n , r ,choose(n,r));
    return 0;
}
int choose(n,r) {
    int c = fact(n)/(fact(n-r)*fact(r));
    return c;
}
int fact(n) {
    int m = 1;
    for (int i = 2; i < n+1; i++) {
        m = m * i;
    }
    return m;
}