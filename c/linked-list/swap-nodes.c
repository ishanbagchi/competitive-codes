#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void append(struct node **head_ref, int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node *last = *head_ref;

    new_node->data = data;
    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}

void swapNode(struct node **head_ref, int x, int y)
{
    if (x == y)
    {
        puts("Give two different elements.");
        return;
    }

    // keep track of previous and current x and y
    struct node *prevX = NULL, *currX = *head_ref;
    while (currX->data != x)
    {
        prevX = currX;
        currX = currX->next;
    }

    struct node *prevY = NULL, *currY = *head_ref;
    while (currY->data != y)
    {
        prevY = currY;
        currY = currY->next;
    }

    if (currX == NULL || currY == NULL)
    {
        puts("Any element is not present!");
        return;
    }

    if (prevX != NULL)
    {
        prevX->next = currY;
    }
    else
    {
        *head_ref = currY;
    }

    if (prevY != NULL)
    {
        prevY->next = currX;
    }
    else
    {
        *head_ref = currX;
    }

    struct node *temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;
}

void printList(struct node *head_ref)
{
    while (head_ref != NULL)
    {
        printf("'%d' ", head_ref->data);
        head_ref = head_ref->next;
    }
    printf("\n");
}

int main()
{
    struct node *head = NULL;

    append(&head, 11);
    append(&head, 22);
    append(&head, 33);
    append(&head, 44);
    append(&head, 55);

    printf("Initial list: ");
    printList(head);

    swapNode(&head, 11, 44);

    printf("Updated list: ");
    printList(head);
    return 0;
}