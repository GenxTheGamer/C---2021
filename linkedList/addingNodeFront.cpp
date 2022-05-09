#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
}

void
append(Node **head_ref, int new_data)
{
    Node *new_node = new Node();

    Node *last = *head_ref;

    new_node->data = new_data;

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

int main()
{

    Node *head = NULL; // Initialized an empty list .

    append(&head, 6); // Appending 6 to the empty list.

    // append (inserting new node at end.)
    // push (adding new node at head.)
    // insert After (inserting new node after particular node)
    // print the last

    return 0;
}