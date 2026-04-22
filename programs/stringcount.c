#include <stdio.h>
#include <ctype.h>
#include<string.h>

int main() {
    char str[200];
    int v = 0, c = 0, s = 0, sp = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {
            if (strchr("aeiou",ch))
                v++;
            else
                c++;
        } 
        else if (isspace(ch)) {
            if (ch != '\n') s++; 
        } 
        else if (ch != '\n' && ch != '\r') {
            sp++;
        }
    }
    printf("\nVowels: %d", v);
    printf("\nConsonants: %d", c);
    printf("\nSpaces: %d", s);
    printf("\nSpecial Characters: %d\n", sp);

    return 0;
}