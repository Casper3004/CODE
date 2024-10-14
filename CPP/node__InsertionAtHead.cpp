#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data) // Constructor
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(int data, Node* &head)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
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

    insertAtHead(12, head);

    print(head);

    insertAtHead(13, head);

    print(head);

    return 0;
}