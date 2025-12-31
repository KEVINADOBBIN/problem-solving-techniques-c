/* Program to count vowels, consonants and special symbols */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[80];
    int i, vowels = 0, consonants = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (isalpha(ch))
        {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (isdigit(ch) || ch == ' ' || ch == '\n')
        {
            continue;   // ignore digits and spaces
        }
        else
        {
            special++;
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of special symbols: %d\n", special);

    return 0;
}
