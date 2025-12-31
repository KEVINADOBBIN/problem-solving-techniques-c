/* Program to find the roots of a quadratic equation */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float d, x1, x2;
    float rpart, ipart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    /* If a = 0, equation becomes linear */
    if (a == 0)
    {
        if (b == 0)
        {
            printf("Invalid equation.\n");
        }
        else
        {
            x1 = -c / b;
            printf("Linear equation.\n");
            printf("Only root x = %.3f\n", x1);
        }
    }
    else
    {
        d = b * b - 4 * a * c;

        /* Real and distinct roots */
        if (d > 0)
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("Real and distinct roots:\n");
            printf("x1 = %.3f\n", x2);
        }

        /* Real and equal roots */
        else if (d == 0)
        {
            x1 = -b / (2 * a);
            printf("Repeated roots:\n");
            printf("x1 = x2 = %.3f\n", x1);
        }

        /* Complex roots */
        else
        {
            rpart = -b / (2 * a);
            ipart = sqrt(fabs(d)) / (2 * a);
            printf("Complex roots:\n");
            printf("x1 = %.3f + i%.3f\n", rpart, ipart);
            printf("x2 = %.3f - i%.3f\n", rpart, ipart);
        }
    }

    return 0;
}
