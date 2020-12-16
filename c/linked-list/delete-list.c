#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void push(struct node **head_ref, int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void printList(struct node *head)
{
    while (head != NULL)
    {
        printf("'%d' ", head->data);
        head = head->next;
    }
    printf("\n");
}

void deleteList(struct node **head_ref)
{
    struct node *current = *head_ref;
    struct node *next;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    *head_ref = NULL;
}

int main()
{
    struct node *head = NULL;
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);

    printList(head);
    deleteList(&head);
    printList(head);
    printf("List Deleted!\n");

    return 0;
}