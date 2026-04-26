#include<stdio.h>
#include<string.h>
int main() {
    char str1[100], str2[100];
    printf("Enter first string :");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string :");
    fgets(str2, sizeof(str2), stdin);
    int n = strlen(str1) + strlen(str2);
    char str3[n];
    int count;
    for (int i=0; str1[i] != '\0'; i++) {
        count = i;
        if (str1[i] != '\n' || str1[i] != '\n') {
            str3[i] = str1[i];
        }
    }
    for (int i=0; str2[i] != '\0'; i++) {
        if (str2[i] != '\n' || str2[i] != '\n') {
            str3[i + count] = str2[i];
        }
    }
    for (int i = 0; str3[i] != '\0'; i++) {
        printf("%c", str3[i]);
    }
    return 0;
}