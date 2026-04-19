#include<stdio.h>
#include<string.h>
int main() {
    char n[100];
    printf("Enter the string : ");
    scanf("%99[^\n]", n);
    int i = strlen(n) - 1;
    while(i >= 0) {
        printf("%c",n[i]);
        i = i -1;
    }
}