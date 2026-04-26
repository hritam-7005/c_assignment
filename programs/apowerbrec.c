#include<stdio.h>
int main() {
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    int power = 1;
    for ( int i = 0; i < b; i++) {
        power = power*a;
    }
    printf("%d ^ %d = %d", a,b, power);
    return 0;
}