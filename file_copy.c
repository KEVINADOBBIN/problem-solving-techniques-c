/* Program to copy the contents of one file to another */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *infp, *outfp;
    char ch;

    /* Open source file in read mode */
    infp = fopen("sample.txt", "r");
    if (infp == NULL)
    {
        printf("Error in opening sample.txt\n");
        return 1;
    }

    /* Open destination file in write mode */
    outfp = fopen("sample_backup.txt", "w");
    if (outfp == NULL)
    {
        printf("Cannot open sample_backup.txt\n");
        fclose(infp);
        return 1;
    }

    /* Read each character from source and write to destination */
    while ((ch = fgetc(infp)) != EOF)
    {
        fputc(ch, outfp);
    }

    printf("sample.txt successfully copied to sample_backup.txt\n");

    /* Close files */
    fclose(infp);
    fclose(outfp);

    return 0;
}
