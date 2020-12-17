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
    {
        last = last->next;
    }

    last->next = new_node;
    return;
}

void push(struct node **head_ref, int new_data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
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

int countIterative(struct node *head_ref)
{
    int count = 0;
    struct node *current = head_ref;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

int countRecursive(struct node *head_ref)
{
    if (head_ref == NULL)
        return 0;

    return 1 + countRecursive(head_ref->next);
}

int main()
{
    struct node *head = NULL;

    append(&head, 11);
    append(&head, 22);
    append(&head, 33);
    append(&head, 44);
    append(&head, 55);

    printList(head);

    printf("The size of the list in Iterative way is: %d\n", countIterative(head));
    printf("The size of the list in Recursive way is: %d\n", countRecursive(head));

    return 0;
}