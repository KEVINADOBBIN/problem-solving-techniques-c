/* Program to calculate GCD and LCM of two positive natural numbers
   using while loop */

#include <stdio.h>

int main()
{
    int m, n, gcd, lcm, temp_m, temp_n;

    printf("Enter the values of m and n: ");
    scanf("%d %d", &m, &n);

    temp_m = m;
    temp_n = n;

    /* Euclidean algorithm using subtraction */
    while (m != n)
    {
        if (m > n)
            m = m - n;
        else
            n = n - m;
    }

    gcd = m;
    lcm = (temp_m * temp_n) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}
