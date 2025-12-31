/* Program to display Fibonacci series using recursive function */

#include <stdio.h>

/* Function declaration */
int fib(int n);

int main()
{
    int i, n;

    printf("Enter the number of elements required: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");

    for (i = 0; i < n; i++)
    {
        printf("%5d", fib(i));
    }

    printf("\n");
    return 0;
}

/* Recursive function to generate Fibonacci terms */
int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
