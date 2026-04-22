#include<stdio.h>
int main() {
    int n;
    printf("How many numbers : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("Number_%d= %d; ", i+1 , arr[i]);
    }
}