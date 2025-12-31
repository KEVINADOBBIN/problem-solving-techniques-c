/* Program to check whether a given character is
   an alphabet, digit, or special character */

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("The given character '%c' is an alphabet.\n", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("The given character '%c' is a digit.\n", ch);
    }
    else
    {
        printf("The given character '%c' is a special character.\n", ch);
    }

    return 0;
}
