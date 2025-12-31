/* Program to find the largest of two numbers using macro */

#include <stdio.h>

#define BIG(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    int n1, n2, max;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &n1, &n2);

    max = BIG(n1, n2);

    printf("Biggest of the numbers = %d\n", max);

    return 0;
}
