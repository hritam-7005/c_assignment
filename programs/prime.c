#include<stdio.h>
#include<math.h>

int main() {
    printf("Number : ");
    int n;
    //float t = pow(n,0.5);
    int check = 0;
    scanf("%d", &n);
    if (n == 1) {
        check = 2;
        goto printresult;
    } else if ( n == 2) {
        check = 1;
        goto printresult;
    }
    for(int i = 2; i < n; i++){
        if (n % i == 0) {
	        check = 0;
            break;
        } else if (n % i != 0) {check = 1;}
    }
    printresult:
    if (check == 1) {
        printf("%d is a prime \n", n);
    } else if (check == 0) { printf("%d is composite \n", n);}
    else if (check == 2) { printf("%d is neither \n", n);}
return 0;
}


