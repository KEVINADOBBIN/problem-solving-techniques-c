/* Program to arrange numbers in ascending and descending order */

#include <stdio.h>

int main()
{
    int n, i, j, num[50], temp;

    printf("How many elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("\nThe given array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%5d", num[i]);
    }

    /* Sorting procedure (Bubble Sort for Ascending Order) */
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    printf("\n\nNumbers in Ascending Order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%5d", num[i]);
    }

    printf("\n\nNumbers in Descending Order:\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%5d", num[i]);
    }

    printf("\n");
    return 0;
}