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

void nLast(struct node *head_ref, int n)
{
    static int count = 0;
    if (head_ref == NULL)
    {
        return;
    }
    nLast(head_ref->next, n);
    if (++count == n)
        printf("%dth element from last is: %d", n, head_ref->data);
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

    printf("Original List: ");
    printList(head);

    nLast(head, 4);
}