#include<stdio.h>
int main() {
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%s", ((((i < (n + (n%2))/2) && (i == j || j == (n-i-1))) || ((i >= (n + (n%2))/2) && (j+1==(n + (n%2))/2))) ? "* " : "  "));
        }
        printf("\n");
    }
    return 0;
}