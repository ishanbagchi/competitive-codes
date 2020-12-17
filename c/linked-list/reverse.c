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

void printList(struct node *head_ref)
{
    while (head_ref != NULL)
    {
        printf("'%d' ", head_ref->data);
        head_ref = head_ref->next;
    }
    printf("\n");
}

static void swap(struct node **head_ref)
{
    struct node *prev = NULL;
    struct node *current = *head_ref;
    struct node *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head_ref = prev;
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

    swap(&head);
    printf("Reversed List: ");
    printList(head);
}