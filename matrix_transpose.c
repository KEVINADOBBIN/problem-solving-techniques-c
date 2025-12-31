/* Program to find the transpose of a matrix */

#include <stdio.h>

int main()
{
    int i, j, m, n;
    int mat[10][10], trans[10][10];

    printf("Enter the order of matrix (rows and columns): ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    /* Transpose logic */
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            trans[j][i] = mat[i][j];
        }
    }

    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%5d", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
