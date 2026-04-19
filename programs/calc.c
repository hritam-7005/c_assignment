#include<stdio.h>
int main() {
    int n, a, b;
    printf("Operation -> \n ");
    printf("1 for +, \n");
    printf("2 for -, \n");
    printf("3 for *, \n");
    printf("4 for //, \n");
    printf("5 for %%, \n");
    printf("6 for **, \n");
    printf("0 to exit. \n");
    while (1 == 1) {
        printf("Enter the first number :");
        scanf("%d", &a);
        printf("Enter the second number :");
        scanf("%d", &b);
        printf("Enter the operation :");
        scanf("%d", &n);
        if (n == 1) {
            printf("%d \n", a + b);
        } else if (n == 2) {
            printf("%d \n", a - b);
        } else if (n == 3) {
            printf("%d \n", a * b);
        } else if (n == 4) {
            if ( b != 0) {
                printf("%f \n", a / (b * 1.0));
            } else {
                printf("Zero division !! \n");
            }     
        } else if (n == 5) {
            printf("%d \n", a % b);
        } else if (n == 6) {
            printf("%lf \n", pow(a,b));
        } else if (n == 0) {
            break;
        } else {
            printf("Please enter a valid operation. \n");
        }
    }
}