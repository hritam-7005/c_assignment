#include<stdio.h>
int main() {
    int n;
    printf("How many numbers : ");
    scanf("%d", &n);
    int arr[n]; int num;
    int index = 0; int check;
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Who do you want to search: ");
    scanf("%d", &num);
    check = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {check = 1; printf("Found %d at position %d.\n", num, i+1); break;}
        else {check = 0;}
    }
    if (check == 0) printf("%d not found.",num);
}