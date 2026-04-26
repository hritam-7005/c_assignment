#include<stdio.h>
int sort(int arr[], int n) {
    int temp;
    for(int i=0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int binSearch(int target,int n,int arr[]) {
    int high = n-1;
    int low = 0;
    while (low <= high) {
        int mid = (low + high)/2;
        if (arr[mid] == target) {
            return mid;
        } else if (mid > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}
int main() {
    int n, target;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the target to search for: ");
    scanf("%d", &target);
    int arr[n];
    printf("Enter the array elements: \n");
    for (int i = 0; i < n; i++) {
        printf(">>");
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    int result = binSearch(target, n, arr);
    if (result != -1) {
        printf("%d found at indes %d in sorted array.",target, result+1);
    } else {
        printf("Error 404 !");
    }
    return 0;
}