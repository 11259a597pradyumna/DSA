#include <stdio.h>

int main()
{
    int a[100], n, i;
    int pos, item, key, found = 0;

    // Input
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Display
    printf("\nArray elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    // Insertion
    printf("\n\nEnter the position for insertion: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position!\n");
    }
    else
    {
        printf("Enter the element to insert: ");
        scanf("%d", &item);

        for (i = n; i >= pos; i--)
        {
            a[i] = a[i - 1];
        }

        a[pos - 1] = item;
        n++;

        printf("Array after insertion:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    // Deletion
    printf("\n\nEnter the position for deletion: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n)
    {
        printf("Invalid position!\n");
    }
    else
    {
        for (i = pos - 1; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }

        n--;

        printf("Array after deletion:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    // Search
    printf("\n\nEnter the element to search: ");
    scanf("%d", &key);

    found = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            found = 1;
            printf("Element found at position %d\n", i + 1);
            break;
        }
    }

    if (found == 0)
    {
        printf("Element not found\n");
    }

    // Reverse
    printf("\nArray after reversal:\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}