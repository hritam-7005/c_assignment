#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int low = 0;
    int high = strlen(str) - 1;

    while (low < high) {
        if (str[low] != str[high]) {
            return 0; // Mismatch found
        }
        low++;
        high--;
    }
    return 1; // No mismatches
}

int main() {
    char word[100];
    printf("Enter a string: ");
    scanf("%s", word);

    if (isPalindrome(word)) {
        printf("%s is a palindrome.\n", word);
    } else {
        printf("%s is not a palindrome.\n", word);
    }

    return 0;
}