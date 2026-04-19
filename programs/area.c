#include<stdio.h>
#include<math.h>

int main() {
    int a,b,c;
    printf("Enter the first side : ");
    scanf("%d", &a);
    printf("Enter the second side : ");
    scanf("%d", &b);
    printf("Enter the third side : ");
    scanf("%d", &c);

    printf("Perimeter = %d \n", a+b+c);

    double s = (a + b + c)/2 ;
    double area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area = %.4f\n", area);
    return 0;
}