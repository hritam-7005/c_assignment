#include <stdio.h>
int main() {
    printpattern1(); printf("\n");
    printpattern2(); printf("\n");
    printpattern3(); printf("\n");
    printpattern4(); printf("\n");
    
}
int printpattern1() {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void printpattern2() {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = 5; j > i; j--) {
            printf("* ");
        }
        printf("\n");
    }
}

void printpattern3() {
    for (int i = 0; i < 6; i++) {
        for (int j = 6; j > i + 1; j--) {
            printf("  ");
        }
        
        for (int j = 0; j < i + 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void printpattern4() {
    for (int i = 0; i < 6; i++) {
        for (int k = 5; k > i; k--) {
            printf(" ");
        }
        for (int j = 0; j < i+1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}