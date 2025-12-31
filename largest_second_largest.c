/* Program to find the largest and second largest of three numbers */

#include <stdio.h>

int main()
{
    int a, b, c;
    int first, second;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    /* Assume a is the largest initially */
    if (a >= b && a >= c)
    {
        first = a;
        second = (b >= c) ? b : c;
    }
    else if (b >= a && b >= c)
    {
        first = b;
        second = (a >= c) ? a : c;
    }
    else
    {
        first = c;
        second = (a >= b) ? a : b;
    }

    printf("The first largest number is %d\n", first);
    printf("The second largest number is %d\n", second);

    return 0;
}
