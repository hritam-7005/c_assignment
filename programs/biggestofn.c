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
    int big = arr[0];
    int index = 0; int temp;
    for (int i = 0; i < n; i++) {
        temp = big;
        big = (arr[i] >= big)? arr[i] : big;
        index = (big == temp)? index : i;
    }
    printf("The largest number is: %d at position: %d", big, index+1);
}