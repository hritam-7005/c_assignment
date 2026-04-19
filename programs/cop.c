#include<stdio.h>
int main() {
    int a;
    int b;
    int r ,q;
    int x = 1;
    int n,m;
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
            printf("Zero divison...");
            break;
        }
        printf("%d = %d x %d + %d \n", n,m,q,r);
        if ( r == 1) {m = r; break;} 
        else if ( r == 0) {m = 0; break;} 
        else {n = m; m = r;} 
    }
    if (m == 1) {printf("Coprime \n");} 
    else if (m == 0) {printf("NOT Coprime \n");} 
    else {printf("NOT Coprime \n");}
    return 0;
}

