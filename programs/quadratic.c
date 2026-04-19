#include <stdio.h>
int main() {
    double a,b,c;
    printf("Enter the first coeff. : ");
    scanf("%lf", &a);
    printf("Enter the second coeff. : ");
    scanf("%lf", &b);
    printf("Enter the third coeff. : ");
    scanf("%lf", &c);

    double d = pow(b,2) - 4*a*c;
    if (d >= 0) {
        double m,n;
        m = (-b + pow(d,0.5))/(2*a);
        n = (-b - pow(d,0.5))/(2*a);
        printf("The roots of the equation %.2lfx^2 + %.2lfx + %.2lf =0 are \n %.2lf, %.2lf. \n",a,b,c,m,n);
    } else {
        printf("Imaginary Roots :( \n");
    }
    return 0;
}