#include <stdio.h>
#define MAX 100
int queue[MAX];
int size = 0;

void insert(int value)
{
    int i;
    if (size == MAX)
    {
        printf("Queue is Full\n");
        return;
    }
    i = size - 1;
    while (i >= 0 && queue[i] > value)
    {
        queue[i + 1] = queue[i];
        i--;
    }
    queue[i + 1] = value;
    size++;
    printf("%d inserted\n", value);
}

void deleteMin()
{
    int i;
    if (size == 0)
    {
        printf("Queue is Empty\n");
        return;
    }
    printf("Deleted element: %d\n", queue[0]);
    for (i = 0; i < size - 1; i++)
    {
        queue[i] = queue[i + 1];
    }
    size--;
}

void display()
{
    int i;
    if (size == 0)
    {
        printf("Queue is Empty\n");
        return;
    }
    printf("Queue: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main()
{

    int choice, value;
    while (1)
    {
        printf("\n--- PRIORITY QUEUE (MIN) ---\n");
        printf("1. Insert\n");
        printf("2. Delete Minimum\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insert(value);
                break;
            case 2: deleteMin(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid choice\n");
        }
    }
}