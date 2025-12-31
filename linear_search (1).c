/* Program to search an element in an array using Linear Search */

#include <stdio.h>

int main()
{
    int list[20];
    int i, n, item, loc = -1;

    printf("Enter the size of the list: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }

    printf("Enter the item to be searched: ");
    scanf("%d", &item);

    for (i = 0; i < n; i++)
    {
        if (list[i] == item)
        {
            loc = i;
            break;
        }
    }

    if (loc != -1)
        printf("Item %d found at location %d\n", item, loc + 1);
    else
        printf("Item %d not found\n", item);

    return 0;
}