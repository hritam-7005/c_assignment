#include<stdio.h>
int main() {
    int a;
    printf("ENter the number of units :");
    scanf("%d", &a);
    if (a <= 100) {
        printf("Amount = Rs. 100 \n");
    } else if ( 100 < a && a <= 150) {
        printf("Amount = Rs. %d \n", a*1);
    } else if ( 150 < a && a <= 200) {
        printf("Amount = Rs. %d \n", a*2);
    } else if ( 200 < a) {
        printf("Amount = Rs. %d \n", a*3);
    }
    return 0;
}