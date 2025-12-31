/* Program to calculate NCR = N! / (R! * (N-R)!) using function */

#include <stdio.h>

/* Function declaration */
long factorial(int n);

int main()
{
    int n, r, k;
    long ncr;

    printf("Enter an integer number n (n <= 14): ");
    scanf("%d", &n);

    printf("Enter another integer number r (r <= n): ");
    scanf("%d", &r);

    if (r > n || n < 0 || r < 0)
    {
        printf("Invalid input.\n");
        return 0;
    }

    k = n - r;

    ncr = factorial(n) / (factorial(r) * factorial(k));

    printf("NCR = %ld\n", ncr);

    return 0;
}

/* Function definition */
long factorial(int n)
{
    long fact = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}
