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

int search(struct node *head_ref, int data)
{
    struct node *current = head_ref;
    int position = 0;
    while (current != NULL)
    {
        if (current->data == data)
        {
            position++;
            return position;
        }
        position++;
        current = current->next;
    }
    return -1;
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

int main()
{
    struct node *head = NULL;
    int pos;

    append(&head, 11);
    append(&head, 22);
    append(&head, 33);
    append(&head, 44);
    append(&head, 55);

    printList(head);

    pos = search(head, 11);
    (pos > 0) ? printf("11: %d\n", pos) : puts("11 Not present");
    pos = search(head, 33);
    (pos > 0) ? printf("33: %d\n", pos) : puts("33 Not present");
    pos = search(head, 55);
    (pos > 0) ? printf("55: %d\n", pos) : puts("55 Not present");
    pos = search(head, 77);
    (pos > 0) ? printf("77: %d\n", pos) : puts("77 Not present");

    return 0;
}
