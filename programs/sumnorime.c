#include<stdio.h>
int pcount = 1;
int pnum = 2;
int main() {
    int n;
    int psum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    int i = 0;
    while (i <= n) {
        pseries(pcount, pnum);
        psum = psum + pnum;
        i = i + 1;
    }
    printf("Sum of first %d primes is: %d", n,psum);
    return 0;
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
        pnum = j;
        pcount = pcount + 1;
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