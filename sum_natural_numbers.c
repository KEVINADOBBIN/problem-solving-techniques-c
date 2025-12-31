/* Program to find the sum of first n natural numbers using while loop */

#include <stdio.h>

int main()
{
    int i = 1, n, sum = 0;

    printf("Enter the natural number n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }

    printf("The sum of first %d natural numbers is %d\n", n, sum);

    return 0;
}
