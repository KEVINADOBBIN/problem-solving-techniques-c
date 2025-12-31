/* Program to find cos(x) using series expansion
   cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! + ...
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i, n;
    float x, term, sum;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Enter the value of x in degrees: ");
    scanf("%f", &x);

    /* Convert degrees to radians */
    x = x * 3.142 / 180;

    term = 1;
    sum = 0;

    for (i = 1; i <= n; i++)
    {
        sum = sum + term;
        term = -term * x * x / ((2 * i - 1) * (2 * i));
    }

    printf("\nSummation of cosine series = %f\n", sum);
    printf("Using library function cos(x) = %f\n", cos(x));

    return 0;
}
