#include<stdio.h>
int main() {
    int a,b;
    int n,m;
    int r,q;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    n = (a > b)? a : b;
    m = (a < b)? a : b;
    while (1 == 1) {
        if (m != 0) {
            r = n % m;
            q = n/m;
        } else {
            printf("Zero divison... \n");
            goto endme;
            break;
        }
        printf("%d = %d x %d + %d \n", n,m,q,r);
        if ( r == 1) {m = r; break;} 
        else if (r == 0) {break;} 
        else {n = m; m = r;}
    }
    printf("gcd(%d,%d) = %d \n",a,b,m);
    endme:
    return 0;
}