#include<stdio.h>
int main() {
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%s", ((i == j || j == (n-i-1)) ? "*" : " "));
        }
        printf("\n");
    }
    return 0;
}