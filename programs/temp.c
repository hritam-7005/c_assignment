#include <stdio.h>
int main() {
    double c;
    printf("Enter temperature in Celcius :");
    scanf("%lf", &c);

    double f = ((c/5)*9) + 32;
    printf("Temperature in Ferenheit = %.3f", f);
    return 0;
}