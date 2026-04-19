#include<stdio.h>
int main() {
    int n;
    printf("How many lines : ");
    scanf("%d", &n);
    int space = n;
    for ( int i = 0; i < n + 1; i++) {
        int sp = space - i;
        for (int k = 0; k < sp; k++) {
                printf(" ");
        }
        for ( int j = 0; j < i + 1; j++){
            printf("%d ", choose(i,j));
        }
        printf("\n");
    }
    return 0;
}

int choose(n,r) {
    int c = fact(n)/(fact(n-r)*fact(r));
    return c;
}
int fact(n) {
    int m = 1;
    for (int i = 2; i < n+1; i++) {
        m = m * i;
    }
    return m;
}