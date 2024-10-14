#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertionAtTail(int data, Node *&tail)
{
    Node *temp = new Node(data);

    tail->next = temp;
    tail = temp;
}

void print_LL(Node *&head)
{
    Node *curr = head;

    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

void count_ele(Node *&head, int *&count)
{
    Node *counter = head;

    while (counter != NULL)
    {
        (*count)++;
        counter = counter->next;
    }
    cout << (*count) << endl;
}

//-------------------------------->>Approach 1<<---------------------

void middle_LL(Node *&head, int *&count)
{
    Node *curr = head;
    int middle = 0;
    int counter = 0;

    if ((*count) % 2 == 0)
    {
        middle = ((*count) / 2) + 1;
    }
    else
    {
        middle = (*count) / 2;
    }

    while (middle != counter)
    {
        counter++;
        curr = curr->next;
    }
    cout << "Middle of the Linked List : " << curr->data << endl;
}

//------------------------------------>>Approach 2 (Optimised)<<--------------------------------------

void optimised_middle_ll(Node* &head, Node* &tail)
{
    Node* ptr1 = head;
    Node* ptr2 = head-> next;

    while(ptr2 != NULL)
    {   
        ptr2 = ptr2-> next;

        if(ptr2 != NULL)
        {
            ptr2 = ptr2-> next;
        }
        ptr1 = ptr1-> next;
    }

    cout << "The middle of LL : " << ptr1-> data; 
}

int main()
{

    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;

    int count = 0;
    int *ct = &count;

    InsertionAtTail(2, tail);
    InsertionAtTail(3, tail);
    InsertionAtTail(4, tail);
    InsertionAtTail(5, tail);
    InsertionAtTail(6, tail);
    InsertionAtTail(7, tail);

    print_LL(head);
    count_ele(head, ct);
    // middle_LL(head, ct);

    optimised_middle_ll(head,tail);

    return 0;
}