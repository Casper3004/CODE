#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* prev;
        Node* next;

    Node(int data)
    {
        this-> data = data;
        this-> prev = NULL;
        this-> next = NULL;
    }
};

void InsertAtHead(int data, Node* &head, Node* &tail)
{
    Node* temp = new Node(data);
    temp-> next = head;
    temp-> prev = tail-> next;
    head-> prev = temp;
    head = temp;
    tail = temp;
}

void InsertAtTail(int data, Node* &head, Node* &tail)
{
    Node* temp = new Node(data);
    temp-> prev = tail;
    temp-> next = NULL;
    tail-> next = temp;
    tail = temp;
}

void InsertionAtAnyPosition(int data, Node* &tail, int posi)
{
    Node* temp = tail;

    int crnt = 0;

    while(crnt != posi-1)
    {
        temp = tail-> next;
        crnt++;
    }

    Node* nodetoinsert = new Node(data);

    nodetoinsert-> next = tail-> next;
    tail-> next-> prev = nodetoinsert;
    nodetoinsert-> prev = tail;
    tail-> next = nodetoinsert;

}

void print(Node* &head)
{
    Node* temp = head;

    while(temp!=NULL)
    {
        cout << temp-> data << " ";
        temp = temp->next; 
    }

    cout << endl;
};

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    InsertAtHead(9, head, tail);
    print(head);

    InsertAtHead(8, head, tail);
    print(head);

    InsertAtHead(7, head, tail);
    print(head);

    // InsertAtTail(12, head , tail);
    // print(head);

    // InsertAtTail(13, head , tail);
    // print(head);

    InsertionAtAnyPosition(45, tail, 2);
    print(head);

    


    return 0;
}