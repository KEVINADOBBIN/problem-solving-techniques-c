/* 
   Menu driven program to find:
   1) Sum of digits of a number
   2) Factorial of a number
*/

#include <stdio.h>

int main()
{
    long num, fact;
    int sum, digit, choice, i;

    printf("MENU\n");
    printf("1. Sum of digits of a number\n");
    printf("2. Factorial of a number\n");
    printf("3. Exit\n");

    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter a positive number: ");
            scanf("%ld", &num);

            sum = 0;
            while (num > 0)
            {
                digit = num % 10;
                sum = sum + digit;
                num = num / 10;
            }

            printf("Sum of digits = %d\n", sum);
            break;

        case 2:
            printf("Enter a number (<15): ");
            scanf("%ld", &num);

            fact = 1;
            for (i = 1; i <= num; i++)
            {
                fact = fact * i;
            }

            printf("Factorial of %ld = %ld\n", num, fact);
            break;

        case 3:
            printf("Exiting program.\n");
            break;

        default:
            printf("Wrong input!!\n");
    }

    return 0;
}
