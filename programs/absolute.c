#include<stdio.h>
int main() {
    int a;
    printf("ENter a number :");
    scanf("%d", &a);
    if (a > 0) {
        printf("|%d| = %d", a,a);
    } else if (a < 0) {
        printf("|%d| = %d", a,-a);
    } else if (a = 0) {
        printf("|%d| = %d", a,a);
    }
    return 0;
}