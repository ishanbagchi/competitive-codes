#include <stdio.h>
#include <stdlib.h>

// Create linked list
struct Node
{
	int data;
	struct Node *next;
};

// Insert a node infront of the list
void push(struct Node **head, int data)
{
	// alocate node
	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

	// put in the data
	new_node->data = data;

	// Make next of the new node as head
	new_node->next = (*head);

	// move head to point the new_node
	(*head) = new_node;
}

// Insert new_node after the given previous node
void insertAfter(struct Node *prev_node, int data)
{
	// check if the previous node is NULL
	if (prev_node == NULL)
	{
		printf("The previous node cannot be NULL");
		return;
	}

	// allocate new node
	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

	// put in the data
	new_node->data = data;

	// make next of new_node as the next of prev_node
	new_node->next = prev_node->next;

	// move the next of prev_node as the new_node
	prev_node->next = new_node;
}

// Insert new_node in the end of the list
void append(struct Node **head_ref, int data)
{
	// alocates node
	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

	struct Node *last = *head_ref;

	// put in the data
	new_node->data = data;

	new_node->next = NULL;

	// if the head is empty, make new_node as head
	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}

	// else traverse till the last node
	while (last->next != NULL)
		last = last->next;

	// change the next of new node
	last->next = new_node;
	return;
}

void printList(struct Node *head)
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
	struct Node *head = NULL;
	append(&head, 6);
	push(&head, 7);
	push(&head, 1);
	append(&head, 4);
	insertAfter(head->next, 9);

	printf("Created Linked List is: ");
	printList(head);

	return 0;
}
