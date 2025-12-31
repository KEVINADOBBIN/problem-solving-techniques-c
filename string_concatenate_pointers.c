/* Program to concatenate two strings using pointers */

#include <stdio.h>

/* Function prototype */
void concat(char *s1, char *s2);

int main()
{
    char s1[50], s2[50];

    printf("Enter the first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter the second string: ");
    fgets(s2, sizeof(s2), stdin);

    /* Remove newline character if present */
    char *p;
    for (p = s1; *p != '\0'; p++)
        if (*p == '\n') *p = '\0';
    for (p = s2; *p != '\0'; p++)
        if (*p == '\n') *p = '\0';

    printf("\nThe first string is: %s\n", s1);
    printf("The second string is: %s\n", s2);

    concat(s1, s2);

    printf("The concatenated string is: %s\n", s1);

    return 0;
}

/* Function to concatenate s2 at the end of s1 using pointers */
void concat(char *s1, char *s2)
{
    /* Move s1 pointer to the end of first string */
    while (*s1 != '\0')
        s1++;

    /* Copy s2 characters to s1 */
    while (*s2 != '\0')
    {
        *s1 = *s2;
        s1++;
        s2++;
    }

    /* Add null terminator at the end */
    *s1 = '\0';
}
