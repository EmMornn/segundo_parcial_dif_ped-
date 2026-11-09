#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};

void RemoveEveryThird(Node *&head)
{

    if (head == nullptr)
    {
        return;
    }

    Node *current = head;
    int position = 1;

    while (current != nullptr)
    {
        Node *nextNode = current->next;

        if (position % 3 == 0)
        {
            if (current->prev != nullptr)
            {
                current->prev->next = current->next;
            }
            if (current->next != nullptr)
            {
                current->next->prev = current->prev;
            }
            delete current;
        }
        current = nextNode;
        position++;
    }
};

void DuplicateNegativeNodes(Node *&head)
{
    Node *current = head;
    while (current != nullptr)
    {
        if (current->data < 0)
        {
            Node *newNode = new Node;
            newNode->next = current->next;
            newNode->prev = current;

            if (current->next != nullptr)
            {
                current->next->prev = newNode;
            }
            current->next = newNode;
            current = newNode->next;
        }
        else
        {
            current = current->next;
        }
    }
};