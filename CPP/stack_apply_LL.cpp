#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;

    Node(int data)
    {
        this-> data = data;
        this-> next = NULL;
    }
};

void push_LL(Node* &head, int data)
{
    Node *temp = new Node(data);

    temp-> next = head;
    head = temp;
}

void pop_LL(Node* &head)
{
    Node* remover = head;
    
    head = remover-> next;
    remover-> next = NULL;
    remover = head;
}

void peek_LL(Node* &head)
{
    cout << head-> data << endl;
}

void print(Node* head)
{
    Node* curr = head;

    while(curr != NULL)
    {
        cout << curr-> data << " " ;
        curr = curr-> next;
    }
    cout << endl;
}

int main(){

    Node* node1 = new Node(1);
    Node* head = node1;

    push_LL(head, 2);
    push_LL(head, 3);
    push_LL(head, 4);
    push_LL(head, 5);
    push_LL(head, 6);
    push_LL(head, 7);
    push_LL(head, 8);
    push_LL(head, 9);
    // print(head);

    // peek_LL(head);
    pop_LL(head);
    // peek_LL(head);
    push_LL(head, 10);
    peek_LL(head);

    print(head);

    

    return 0;
}