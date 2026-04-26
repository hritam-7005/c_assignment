#include<stdio.h>
int main() {
    int a;
    printf("ENter a number :");
    scanf("%d", &a);
    printf("|%d| = %d", a, ((a >= 0)? a : -a));
    return 0;
}