#include<stdio.h>
int main() {
    int a,b,c,n;
    a = 0;
    b = 1;
    printf("i. Enter required n : ");
    scanf("%d",&n);
    printf("Fibonacci series upto n : \n");
    printf("0 \n");
    printf("%d \n", (n > 1) ? 1 : 0);
    c = a + b;
    while(c<n+1) {
        printf("%d \n", c);
        a = b;
        b = c;
        c = a + b;
    }
    printf("\n");
    printf("ii. Enter required n : ");
    scanf("%d",&n);
    printf("nth Fibonacci number : ");
    a = 0;
    b = 1;
    c = a + b;
    if (n == 1) {printf("%d \n", 0);}
    else if (n == 2) {printf("%d \n", 1);}
    int i = 3;
    while (i < n + 1) {
        a = b;
        b = c;
        c = a + b;
        i = i + 1;
    }
    printf("%d \n", c);
    a = 0;
    b = 1;
    c = a + b;
    printf("iii. First n Fibinacci numbers : \n");
    if (n >= 1) {printf("%d \n", 0);}
    if (n >= 2) {printf("%d \n", 1);}
    i = 3;
    while (i < n + 1) {
        a = b;
        b = c;
        c = a + b;
        printf("%d \n", c);
        i = i + 1;
    }
    return 0;
}