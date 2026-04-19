#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("Enter the third number : ");
    scanf("%d", &c);

    int m;
    m = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Greatest -> %d \n", m);
    return 0;
}