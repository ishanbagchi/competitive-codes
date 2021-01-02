#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

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

void moveNode(struct node **dest_ref, struct node **source_ref);

struct node *sortedMerge(struct node *list1, struct node *list2)
{
    struct node dummy;
    struct node *tail = &dummy;

    dummy.next = NULL;
    while (1)
    {
        if (list1 == NULL)
        {
            tail->next = list2;
            break;
        }
        else if (list2 == NULL)
        {
            tail->next == list1;
            break;
        }

        if (list1->data <= list2->data)
        {
            moveNode(&(tail->next), &list1);
        }
        else
        {
            moveNode(&(tail->next), &list2);
        }

        tail = tail->next;
    }
    return (dummy.next);
}

void moveNode(struct node **dest_ref, struct node **source_ref)
{
    struct node *new_node = *source_ref;
    assert(new_node != NULL);

    *source_ref = new_node->next;
    new_node->next = *dest_ref;
    *dest_ref = new_node;
}

int main()
{
    struct node *head1 = NULL;
    struct node *head2 = NULL;
    struct node *result = NULL;

    append(&head1, 11);
    append(&head1, 22);
    append(&head1, 33);
    append(&head1, 44);
    append(&head1, 55);

    append(&head2, 56);
    append(&head2, 62);
    append(&head2, 68);
    append(&head2, 73);
    append(&head2, 79);
    append(&head2, 80);

    printf("Original List 1: ");
    printList(head1);
    printf("Original List 2: ");
    printList(head2);

    result = sortedMerge(head1, head2);
    printf("Merged Linked List is: \n");
    printList(result);

    return 0;
}