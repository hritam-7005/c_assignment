#include<stdio.h>
   int main() {
	   int a;
	   printf("Enter the number: ");
	   scanf("%d", &a);
	   if (a%2 == 0) {
		   printf("%d is Even", a);
	   } else if (a%2 == 1) {
		   printf("%d is Odd", a);
	   }
	   return 0;
   }