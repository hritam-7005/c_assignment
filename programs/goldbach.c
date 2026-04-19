#include<stdio.h>
int main() {
    int n;
    printf("Enter the number to check: ");
    scanf("%d", &n);
    if(n%2 == 0) {
        int i = 3;
        while(i < n) {
            if (isprime(i)) {
                if (isprime(n - i)) {
                    printf("%d = %d + %d \n",n,i, n-i);
                    break;
                }
            }
            i = i + 1;
        }
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