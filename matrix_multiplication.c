/* Program to read two matrices and find their product */

#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], prod[10][10];
    int i, j, k;
    int m, n, p, q;

    printf("Enter the order m and n of matrix A: ");
    scanf("%d %d", &m, &n);

    printf("Enter the order p and q of matrix B: ");
    scanf("%d %d", &p, &q);

    /* Check matrix multiplication condition */
    if (n != p)
    {
        printf("Matrix multiplication not possible (n != p).\n");
        return 0;
    }

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    /* Initialize product matrix */
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            prod[i][j] = 0;
        }
    }

    /* Compute product of matrices A and B */
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            for (k = 0; k < n; k++)
            {
                prod[i][j] = prod[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }

    printf("\nProduct of Matrix A and B:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%4d", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}
