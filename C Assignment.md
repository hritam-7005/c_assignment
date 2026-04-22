
1.  Find sum of two integers
   
```c
#include <stdio.h>
int main() {
    int a,b; 
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("Sum = %d \n", a + b);
    return 0;
}
```
```
Enter the first number : 10
Enter the second number : 5
Sum = 15
```

2.  Find out the area and perimeter of a rectangle
   
```c
#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c;
    printf("Enter the first side : ");
    scanf("%d", &a);
    printf("Enter the second side : ");
    scanf("%d", &b);
    printf("Enter the third side : ");
    scanf("%d", &c);

    printf("Perimeter = %d \n", a+b+c);

    double s = (a + b + c)/2 ;
    double area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area = %.4f\n", area);
}   
```
```
Enter the first side : 3
Enter the second side : 4
Enter the third side : 5
Perimeter = 12 
Area = 6.0000
```

3.  Input three decimal numbers and find their sum and average.
   
```c
#include<stdio.h>
int main() {
    double a,b,c;
    printf("Enter the first number : ");
    scanf("%lf", &a);
    printf("Enter the second number : ");
    scanf("%lf", &b);
    printf("Enter the third number : ");
    scanf("%lf", &c);

    printf("Sum = %f \n" , a + b + c);
    printf("Average = %f \n" , (a + b + c)/3);
    return 0;
}
```
```
Enter the first number : 2.57
Enter the second number : 3.54
Enter the third number : 5.25
Sum = 11.360000 
Average = 3.786667 
```

4.  Input two numbers and swap them.
   
```c
#include <stdio.h>
int main() {
    int a ,b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);

    printf(" a = %d \n", a);
    printf(" b = %d \n", b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n Swapping... \n \n");

    printf(" a = %d \n", a);
    printf(" b = %d \n", b);
    return 0;
}
```
```
Enter the first number : 10
Enter the second number : 15
 a = 10 
 b = 15 

 Swapping... 
 
 a = 15 
 b = 10 
```

5.  Convert temperature in Celsius to temperature in Fahrenheit
   
```c
#include <stdio.h>
int main() {
    double c;
    printf("Enter temperature in Celcius :");
    scanf("%lf", &c);

    double f = ((c/5)*9) + 32;
    printf("Temperature in Ferenheit = %.3f", f);
    return 0;
}
```
```
Enter temperature in Celcius :75
Temperature in Ferenheit = 167.000
```

6.  Implement simple arithmetic calculator using user defined functions for each operation
(addition, subtraction,multiplication, division, modulus, exponent).

```c
#include<stdio.h>
int main() {
    int n, a, b;
    printf("Operation -> \n ");
    printf("1 for +, \n");
    printf("2 for -, \n");
    printf("3 for *, \n");
    printf("4 for //, \n");
    printf("5 for %%, \n");
    printf("6 for **, \n");
    printf("0 to exit. \n");
    while (1 == 1) {
        printf("Enter the first number :");
        scanf("%d", &a);
        printf("Enter the second number :");
        scanf("%d", &b);
        printf("Enter the operation :");
        scanf("%d", &n);
        if (n == 1) {
            printf("%d \n", a + b);
        } else if (n == 2) {
            printf("%d \n", a - b);
        } else if (n == 3) {
            printf("%d \n", a * b);
        } else if (n == 4) {
            if ( b != 0) {
                printf("%f \n", a / (b * 1.0));
            } else {
                printf("Zero division !! \n");
            } 
        } else if (n == 5) {
            if ( b != 0) {
                printf("%f \n", a % b);
            } else {
                printf("Zero division !! \n");
            } 
        } else if (n == 6) {
            printf("%lf \n", pow(a,b));
        } else if (n == 0) {
            break;
        } else {
            printf("Please enter a valid operation. \n");
        }
    }
}
```
```
Operation -> 
1 for +, 
2 for -, 
3 for *, 
4 for //, 
5 for %, 
6 for **, 
0 to exit. 
Enter the first number :45
Enter the second number :8
Enter the operation :4
5.625000 
Enter the first number :0
Enter the second number :5
Enter the operation :0
```

7.  Check an integer whether it is odd or even
   
```c
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
```
```
Enter the number: 65
65 is Odd
```

8.  Find greatest of 3 integers.
   
```c
#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("Enter the third number : ");
    scanf("%d", &c);

    int m;
    m = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Greatest -> %d \n", m);
    return 0;
}
```
```
Enter the first number : 3
Enter the second number : 7
Enter the third number : 9
Greatest -> 9 
```

9.  Find 2nd greatest of 3 integers
   
```c
#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("Enter the third number : ");
    scanf("%d", &c);

    int m;
    m = (a > b) ? ((a > c) ? ((b > c) ? b : c) : a) : ((b > c) ? ((a > c) ? a : c) : b);
    printf("2nd Greatest -> %d \n", m);
    return 0;
}
```
```
Enter the first number : 6
Enter the second number : 8
Enter the third number : 9
2nd Greatest -> 8 
```

10.  Input a number and find its absolute value.

```c
    #include<stdio.h>
int main() {
    int a;
    printf("ENter a number :");
    scanf("%d", &a);
    if (a > 0) {
        printf("|%d| = %d", a,a);
    } else if (a < 0) {
        printf("|%d| = %d", a,-a);
    } else if (a = 0) {
        printf("|%d| = %d", a,a);
    }
    return 0;
}
```
```
ENter a number :-100
|-100| = 100
```

12. Solve a given quadratic equation. (Without imaginary roots).

```c
#include <stdio.h>
int main() {
    double a,b,c;
    printf("Enter the first coeff. : ");
    scanf("%lf", &a);
    printf("Enter the second coeff. : ");
    scanf("%lf", &b);
    printf("Enter the third coeff. : ");
    scanf("%lf", &c);

    double d = pow(b,2) - 4*a*c;
    if (d >= 0) {
        double m,n;
        m = (-b + pow(d,0.5))/(2*a);
        n = (-b - pow(d,0.5))/(2*a);
        printf("The roots of the equation %.2lfx^2 + %.2lfx + %.2lf =0 are \n %.2lf, %.2lf. \n",a,b,c,m,n);
    } else {
        printf("Imaginary Roots :( \n");
    }
    return 0;
}
```
```
Enter the first coeff. : 2
Enter the second coeff. : 6
Enter the third coeff. : 4
The roots of the equation 2.00x^2 + 6.00x + 4.00 =0 are 
 -1.00, -2.00. 
```

13.  To calculate the electric bill using following conditions:

```c
#include<stdio.h>
int main() {
    int a;
    printf("ENter the number of units :");
    scanf("%d", &a);
    if (a <= 100) {
        printf("Amount = Rs. 100 \n");
    } else if ( 100 < a && a <= 150) {
        printf("Amount = Rs. %d \n", a*1);
    } else if ( 150 < a && a <= 200) {
        printf("Amount = Rs. %d \n", a*2);
    } else if ( 200 < a) {
        printf("Amount = Rs. %d \n", a*3);
    }
    return 0;
}
```
```
ENter a number :331
Amount = Rs. 993
```

14.  Print 1 to 100

```c
#include<stdio.h>
int main() {
    for (int i = 1; i < 101; i++) {
        printf("%d \n", i);
    }
    return 0;
}
```

15. Print 100 to 1.

```c
#include<stdio.h>
int main() {
    for (int i = 100; i > 0; i--) {
        printf("%d \n", i);
    }
    return 0;
}
```

16.  Find Factorial of a number

```c
#include <stdio.h>
int main() {
    int n;
    printf("Number? : ");
    scanf("%d", &n);
    printf("%d! = %d \n", n ,fact(n));
    return 0;
}
int fact(n) {
    int m = 1;
    for (int i = 2; i < n+1; i++) {
        m = m * i;
    }
    return m;
}
```
```
Number? : 5
5! = 120 
```

17.  Find sum of n natural numbers

```c
#include<stdio.h>
int main() {
    int n;
    printf("N = ? :");
    scanf("%d", &n);
    printf("Sum is : %d \n", (n*(n+1))/2);
    return 0;
}
```
```
N = ? :5
Sum is : 15
```

18.  Check whether a number is Prime or not.

```c
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
```
```
Number : 3
3 is a prime 
```

19. Input a number n and find:
	1.  Fibonacci series up to n
	2.  The nth Fibonacci number
	3.   First n Fibonacci numbers
   
```c
#include<stdio.h>
int main() {
    int a,b,c,n;
    a = 0;
    b = 1;
    printf("i. Enter required n : ");
    scanf("%d",&n);
    printf("Fibonacci series upto n : \n");
    printf("0 \n");
    printf("%d \n", (n > 1) ? 1 : 0);
    c = a + b;
    while(c<n+1) {
        printf("%d \n", c);
        a = b;
        b = c;
        c = a + b;
    }
    printf("\n");
    test:
    printf("ii. Enter required n : ");
    scanf("%d",&n);
    printf("nth Fibonacci number : ");
    a = 0;
    b = 1;
    c = a + b;
    if (n == 1) {printf("%d \n", 0);}
    else if (n == 2) {printf("%d \n", 1);}
    int i = 3;
    while (i < n + 1) {
        a = b;
        b = c;
        c = a + b;
        i = i + 1;
    }
    printf("%d \n", c);
    a = 0;
    b = 1;
    c = a + b;
    printf("iii. First n Fibinacci numbers : \n");
    if (n >= 1) {printf("%d \n", 0);}
    if (n >= 2) {printf("%d \n", 1);}
    i = 3;
    while (i < n + 1) {
        a = b;
        b = c;
        c = a + b;
        printf("%d \n", c);
        i = i + 1;
    }
    return 0;
}
```
```
i. Enter required n : 10
Fibonacci series upto n : 
0 
1 
1 
2 
3 
5 
8 

ii. Enter required n : 15
nth Fibonacci number : 610 
iii. First n Fibinacci numbers : 
0 
1 
2 
3 
5 
8 
13 
21 
34 
55 
89 
144 
233 
377 
610 
```

20. Check whether a number is Perfect or not (A number is considered to e a Perfect
number if sum of factors of the number is equal to itself).

```c
#include<stdio.h>
int main() {
    int n;
    printf("Enter number to check: ");
    scanf("%d", &n);
    int i = 1;
    int sum = 0;
    while (i < n) {
        sum = sum + ((n%i == 0) ? i : 0);
        i = i + 1;
    }
    if (sum == n) {
        printf("%d is a Perfect number.", n);
    } else {
        printf("%d is not a Perfect number.", n);
    }
}
```
```
Enter number to check: 28
28 is a Perfect number.
```

21. Check whether two numbers are co-prime or not.

```c
#include<stdio.h>
int main() {
    int a;
    int b;
    int r ,q;
    int x = 1;
    int n,m;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    n = (a > b)? a : b;
    m = (a < b)? a : b;
    while (1 == 1) {
        if (m != 0) {
            r = n % m;
            q = n/m;
        } else {
            printf("Zero divison...");
            break;
        }
        printf("%d = %d x %d + %d \n", n,m,q,r);
        if ( r == 1) {m = r; break;} 
        else if ( r == 0) {m = 0; break;} 
        else {n = m; m = r;} 
    }
    if (m == 1) {printf("Coprime \n");} 
    else if (m == 0) {printf("NOT Coprime \n");} 
    else {printf("NOT Coprime \n");}
    return 0;
}
```
```
Enter first number: 25
Enter second number: 7
25 = 7 x 3 + 4 
7 = 4 x 1 + 3 
4 = 3 x 1 + 1 
Coprime 
```

22. According to the Gold Bach conjecture, every even number greater than two is
the sum of two prime numbers. Input an even number and decompose it into
two primes.

```c
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
```
```
Enter the number to check: 52
52 = 5 + 47
```

23. Find the sum of the digits of a number

```c
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = 0;
    while (n != 0) {
        sum = sum + (n%10);
        n = (n - (n%10))/10;
    }
    printf("Sum of digits = %d", sum);
    return 0;
}
```
```
Enter a number: 2536
Sum of digits = 16
```

24. Find the Reverse of a number

```c
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int rev = n%10;
    n = (n - (n%10))/10;
    while (n != 0) {
        rev = rev*10 + (n%10);
        n = (n - (n%10))/10;
    }
    printf("Reverse of number = %d", rev);
    return 0;
}
```
```
Enter a number: 12345     
Reverse of number = 54321
```

25. Check whether a number is Armstrong or not (A number is considered to e an
Armstrong number if the sum of cubes of its digits is equal to the number itself)

```c
#include<stdio.h>
int main() {
    int n;
    printf("Enter a 3 digit number: ");
    scanf("%d",&n);
    int m = n;
    int sum = 0;
    while (n != 0) {
        sum = sum + (int)pow((n%10),3);
        n = (n - (n%10))/10;
    }
    if (sum == m) {
        printf("%d is a Armstrong Number.\n",m);
    } else {
        printf("%d is not a Armstrong Number.\n",m);
    }
    return 0;
}
```
```
Enter a 3 digit number: 153
153 is a Armstrong Number.
```

26. Check whether a number is Krishnamurti or not (A number is considered to e a
Krishnamurti number if the sum of factorials of its digits is equal to the number itself)

```c
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int m = n;
    int sum = 0;
    while (n != 0) {
        sum = sum + fact(n%10);
        n = (n - (n%10))/10;
    }
    if (sum == m) {
        printf("%d is a Krishnamurty Number.\n",m);
    } else {
        printf("%d is not a Krishnamurty Number.\n",m);
    }
    return 0;
}
int fact(n) {
    int m = 1;
    for (int i = 2; i < n+1; i++) {
        m = m * i;
    }
    return m;
}
```
```
Enter a number: 145
145 is a Krishnamurty Number.
```

27. Print the following pattern

```c
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
```
```
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 

* * * * * 
 * * * * 
  * * * 
   * * 
    * 
     

          * 
        * * 
      * * * 
    * * * * 
  * * * * * 
* * * * * * 

     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
* * * * * * 
```

28. Print the following pattern

```c
#include<stdio.h>
int main() {
    for ( int i = 1; i < 7; i++) {
        for ( int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    } printf("\n");
    for ( int i = 1; i < 7; i++) {
        for ( int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}
```
```
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 5 6 

1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
6 6 6 6 6 6 
```

29. Print the following letters with 'star'(*)

```c
#include<stdio.h>
int main() {
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%s", ((i == j || j == (n-i-1)) ? "*" : " "));
        }
        printf("\n");
    }
    return 0;
}
```
```
Please enter a number: 5
*   *
 * * 
  *  
 * * 
*   *
```
```c
#include<stdio.h>
int main() {
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%s", ((j == 0 || j == (n-1) || j == i) ? "* " : "  "));
        }
        printf("\n");
    }
    return 0;
}
```
```
Please enter a number: 5
*       * 
* *     * 
*   *   * 
*     * * 
*       * 
```
```c
#include<stdio.h>
int main() {
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%s", ((((i < (n + (n%2))/2) && (i == j || j == (n-i-1))) || ((i >= (n + (n%2))/2) && (j+1==(n + (n%2))/2))) ? "*" : " "));
        }
        printf("\n");
    }
    return 0;
}
```
```
Please enter a number: 5
*   *
 * * 
  *  
  *  
  *  
```
```c
#include<stdio.h>
int main() {
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%s", ((i == 0 || i == n-1 || j == (n-i-1)) ? "* " : "  "));
        }
        printf("\n");
    }
    return 0;
}
```
```
Please enter a number: 5
* * * * * 
      *   
    *     
  *       
* * * * * 
```

30. Print the following order (odd positions- Fibonacci Series and even position- prime
numbers)
31. 2 1 3 2 5 3 7 5 11 8 13

```c
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
```
```
Enter n: 10
2  1  3  2  5  3  7  5  11  8  13  
```

32. Find the sum of 1st n prime numbers.

```c
#include<stdio.h>
int pcount = 1;
int pnum = 2;
int main() {
    int n;
    int psum = 2;
    printf("Enter n: ");
    scanf("%d", &n);
    while (pcount < n) {
        pseries(pcount, pnum);
        psum = psum + pnum;
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
```
```
Enter n: 5
Sum of first 5 primes is: 28
```

33. Input a number and check if it a Krishnamurthy number

```c
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int m = n;
    int sum = 0;
    while (n != 0) {
        sum = sum + fact(n%10);
        n = (n - (n%10))/10;
    }
    if (sum == m) {
        printf("%d is a Krishnamurty Number.\n",m);
    } else {
        printf("%d is not a Krishnamurty Number.\n",m);
    }
    return 0;
}
int fact(n) {
    int m = 1;
    for (int i = 2; i < n+1; i++) {
        m = m * i;
    }
    return m;
}
```
```
Enter a number: 145
145 is a Krishnamurty Number.
```

34. Print the Non-Fibonacci series

```c
#include<stdio.h>
int main() {
    int a,b,c,n;
    a = 1;
    b = 1;
    printf("Enter required n : ");
    scanf("%d",&n);
    printf("Non Fibonacci series upto n : \n");
    c = a + b;
    while(c < n+1) {
        int i = c + 1;
        a = b;
        b = c;
        c = a + b;
        while(i < c) {
            printf("%d \n", i);
            i = i +1;
        }
    }
}
```
```
Enter required n : 10
Non Fibonacci series upto n : 
4 
6 
7 
9 
10 
11 
12 
```

35. Input the values of two variables n and r and calculate nCr.

```c
#include <stdio.h>
int main() {
    int n,r;
    printf("n : ");
    scanf("%d", &n);
    printf("r : ");
    scanf("%d", &r);
    printf("%dC%d = %d \n", n , r ,choose(n,r));
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
```
```
n : 5
r : 2
5C2 = 10 
```

36. To input n numbers from user and display those.

```c
#include<stdio.h>
int main() {
    int n;
    printf("How many numbers : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("Number_%d= %d; ", i+1 , arr[i]);
    }
}
```
```
How many numbers : 5
Enter number 1: 2
Enter number 2: 3
Enter number 3: 5
Enter number 4: 7
Enter number 5: 11
Number_1= 2; Number_2= 3; Number_3= 5; Number_4= 7; Number_5= 11; 
```

37. To input n numbers and find their sum

```c
#include<stdio.h>
int main() {
    int n;
    printf("How many numbers : ");
    scanf("%d", &n);
    int sum = 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i]
    }
    printf("SUm = %d",sum);
}
```
```
How many numbers : 5
Enter number 1: 2
Enter number 2: 3
Enter number 3: 5
Enter number 4: 7
Enter number 5: 11
SUm = 28
```

38. To find the biggest of n input numbers and find its position

```c
#include<stdio.h>
int main() {
    int n;
    printf("How many numbers : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int big = arr[0];
    int index = 0; int temp;
    for (int i = 0; i < n; i++) {
        temp = big;
        big = (arr[i] >= big)? arr[i] : big;
        index = (big == temp)? index : i;
    }
    printf("The largest number is: %d at position: %d", big, index+1);
}
```
```
How many numbers : 5
Enter number 1: 2
Enter number 2: 5
Enter number 3: 3
Enter number 4: 8
Enter number 5: 6
The largest number is: 8 at position: 4
```

39. To input a list of numbers and search a particular number is present or not

```c
#include<stdio.h>
int main() {
    int n;
    printf("How many numbers : ");
    scanf("%d", &n);
    int arr[n]; int num;
    int index = 0; int check;
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Who do you want to search: ");
    scanf("%d", &num);
    check = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {check = 1; printf("Found %d at position %d.\n", num, i+1); break;}
        else {check = 0;}
    }
    if (check == 0) printf("%d not found.",num);
}
```
```
How many numbers : 5
Enter number 1: 1
Enter number 2: 5
Enter number 3: 3
Enter number 4: 2
Enter number 5: 7
Who do you want to search: 2
Found 2 at position 4.
```

40. Do the previous problem using binary search.

41. Find the factorial of a number using function

```c
#include <stdio.h>
int main() {
    int n;
    printf("Number? : ");
    scanf("%d", &n);
    printf("%d! = %d \n", n ,fact(n));
    return 0;
}
int fact(n) {
    int m = 1;
    for (int i = 2; i < n+1; i++) {
        m = m * i;
    }
    return m;
}
```
```
Number? : 5
5! = 120 
```



43. Draw the Pascal Triangle

```c
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
```
```
How many lines : 8
        1 
       1 1 
      1 2 1 
     1 3 3 1 
    1 4 6 4 1 
   1 5 10 10 5 1 
  1 6 15 20 15 6 1 
 1 7 21 35 35 21 7 1 
1 8 28 56 70 56 28 8 1 
```

44. Find factorial of a number using recursion

45. Sum of n natural numbers using recursion

46. Find a^b using recursion

47. Print Fibonacci series using recursion

48. Input two numbers and find their GCD using recursion.

```c
#include<stdio.h>
int main() {
    int a,b;
    int n,m;
    int r,q;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    n = (a > b)? a : b;
    m = (a < b)? a : b;
    while (1 == 1) {
        if (m != 0) {
            r = n % m;
            q = n/m;
        } else {
            printf("Zero divison... \n");
            goto endme;
            break;
        }
        printf("%d = %d x %d + %d \n", n,m,q,r);
        if ( r == 1) {m = r; break;} 
        else if (r == 0) {break;} 
        else {n = m; m = r;}
    }
    printf("gcd(%d,%d) = %d \n",a,b,m);
    endme:
    return 0;
}
```
```
Enter first number: 72
Enter second number: 16
72 = 16 x 4 + 8 
16 = 8 x 2 + 0 
gcd(72,16) = 8
```

49. Input two strings and concatenate them.

50. Enter a sentence and find number of vowels, consonants, spaces and special characters

51. Input a string and reverse it.

```c
#include<stdio.h>
#include<string.h>
int main() {
    char n[100];
    printf("Enter the string : ");
    scanf("%99[^\n]", n);
    int i = strlen(n) - 1;
    while(i >= 0) {
        printf("%c",n[i]);
        i = i -1;
    }
}
```
```
Enter the string : Avada Kedavra
arvadeK adavA
```

52. Check a string palindrome or not.

```c
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int low = 0;
    int high = strlen(str) - 1;

    while (low < high) {
        if (str[low] != str[high]) {
            return 0;
        }
        low++;
        high--;
    }
    return 1;
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
```
```
Enter a string: malayalam
malayalam is a palindrome.
```

53. Find reverse of a string.

```c
#include<stdio.h>
#include<string.h>
int main() {
    char n[100];
    printf("Enter the string : ");
    scanf("%99[^\n]", n);
    int i = strlen(n) - 1;
    while(i >= 0) {
        printf("%c",n[i]);
        i = i -1;
    }
}
```
```
Enter the string : helloWorld
arvadeK dlroWolleh
```