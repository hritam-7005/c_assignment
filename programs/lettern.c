#include<stdio.h>
int main() {
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%s", ((j == 0 || j == (n-1) || j == i) ? "* " : "  "));
        }
        printf("\n");
    }
    return 0;
}