#include<stdio.h>
int main() {
    int a,b,c,n;
    a = 1;
    b = 1;
    printf("Enter required n : ");
    scanf("%d",&n);
    printf("Non Fibonacci series upto n : \n");
    c = a + b;
    while(c < n+1) {
        int i = c + 1;
        a = b;
        b = c;
        c = a + b;
        while(i < c) {
            printf("%d \n", i);
            i = i +1;
        }
    }
}