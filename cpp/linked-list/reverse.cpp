#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

struct LinkedList
{
    node *(head);
    LinkedList() { head = NULL; }

    void printList()
    {
        struct node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << ' ';
            temp = temp->next;
        }
        cout << "\n";
    }

    void append(int data)
    {
        struct node *new_node = new node(data);
        struct node *last = head;

        if (head == NULL)
        {
            head = new_node;
            return;
        }

        while (last->next != NULL)
            last = last->next;

        last->next = new_node;
        return;
    }

    void reverseList()
    {
        node *current = head;
        node *next = NULL, *prev = NULL;

        while (current != NULL)
        {
            next = current->next;
            current->next = prev;

            prev = current;
            current = next;
        }
        head = prev;
    }
};

int main()
{
    LinkedList list;
    list.append(11);
    list.append(22);
    list.append(33);
    list.append(44);

    cout << "Given linked list\n";
    list.printList();

    list.reverseList();

    cout << "\nReversed Linked list \n";
    list.printList();

    return 0;
}