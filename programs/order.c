#include<stdio.h>

int pcount, fcount = 1;
int fnum1, fnum2, pnum1;
int main() {
    int n;
    pnum1 = 2;
    fnum1 = 1;
    fnum2 = 2;
    printf("Enter n: ");
    scanf("%d", &n);
    int i = 0;
    while (i <= n) {
        if (i%2) {printf("%d  ", fseries(fcount, fnum1, fnum2));}
        else {printf("%d  ", pseries(pcount, pnum1));}
        i = i + 1;
    }
}
int pseries(i, n) {
    int j = n+1;
    if (i == 0) {
        pcount = pcount + 1;
        return 2;
    }else {
        while (!isprime(j)) {
            j = j + 1;
        }
        pnum1 = j;
        pcount = pcount + 1;
        return pnum1;
    }
}
int isprime(n) {
    int check = 0;
    for(int i = 2; i < n; i++){
        if (n % i == 0) {
	        check = 0;
            break;
        } else if (n % i != 0) {check = 1;}
    }
    if (check == 1) {
        return 1;
    } else if (check == 0) {return 0;}
}
int fseries(i,a,b) {
    if (i == 1) {fcount=fcount + 1; return 1;}
    else if (i == 2) {fcount = fcount + 1; return 2;}
    else {
        int c = a + b;
        fcount = fcount + 1;
        fnum1 = fnum2;
        fnum2 = c;
        return c;
    }
}