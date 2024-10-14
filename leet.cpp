#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* next;

    node(int data)
    {
        this-> data = data;
        this-> next = NULL;
    }
};

void InsertionAtTail(node* &tail, int data)
{
    node* temp = new node(data);

    tail-> next = temp;
    tail = temp;
}

void print(node* head)
{
    node* temp = head;

    while(temp != NULL)
    {
        cout << temp-> data << " ";
        temp = temp-> next;
    }
}

void InsertionAtHead(node* &head, int data)
{
    node* temp = new node(data);

    head-> next = temp;
    head = temp;
}

int main(){

    node* node1 = new node(1);
    node* head = node1;
    node* tail = node1;

    // InsertionAtTail(tail, 2);
    // // print(head);

    InsertionAtHead(head, 9);
    print(head);

    return 0;
}