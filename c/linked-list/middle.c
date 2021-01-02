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

int displayMiddle(struct node *head_ref)
{
    struct node *fast_ptr = head_ref;
    struct node *slow_ptr = head_ref;

    if (head_ref != NULL)
    {
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
    }

    return slow_ptr->data;
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

    printf("Original List:");
    printList(head);

    printf("The middle element is: %d\n", displayMiddle(head));
}