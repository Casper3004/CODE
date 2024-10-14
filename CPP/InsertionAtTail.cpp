#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor for creating node

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtTail(int data, Node* &tail)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void print(Node* &head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    InsertAtTail(12, tail);
    print(head);

    InsertAtTail(13, tail);
    print(head);

    InsertAtTail(14, tail);
    print(head);

    return 0;
}