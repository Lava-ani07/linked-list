#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *top = NULL;
    struct Node *newNode;
    int n, i, value;

    printf("Enter number of elements to push: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value: ");
        scanf("%d", &value);

        newNode = (struct Node *)malloc(sizeof(struct Node));

        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }

    printf("Top element = %d", top->data);

    return 0;
}