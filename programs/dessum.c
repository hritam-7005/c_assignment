#include<stdio.h>
int main() {
    double a,b,c;
    printf("Enter the first number : ");
    scanf("%lf", &a);
    printf("Enter the second number : ");
    scanf("%lf", &b);
    printf("Enter the third number : ");
    scanf("%lf", &c);

    printf("Sum = %f \n" , a + b + c);
    printf("Average = %f \n" , (a + b + c)/3);
    return 0;
}