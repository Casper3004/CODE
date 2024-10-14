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

void InsertionAtTail(Node* &tail, int data)
{
    Node* temp = new Node(data);

    tail-> next = temp;
    tail = temp;
}

void print_LL(Node* &head)
{
    Node* curr = head;

    while(curr != NULL)
    {
        cout << curr-> data << " ";
        curr = curr-> next;
    }
    cout << endl;
}

void k_group(Node *&head, int k)
{
    int counter = 0;

    while(counter < k)
    {
        Node* curr = head;
        Node* next = head-> next;

        curr-> next = next-> next;
        next-> next = curr;
        counter++;

        if(next-> next == NULL){
            return;
        }
    }
    k_group(head-> next,k);
}

int main(){

    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    InsertionAtTail(tail, 2);
    InsertionAtTail(tail, 3);
    InsertionAtTail(tail, 4);
    InsertionAtTail(tail, 5);
    InsertionAtTail(tail, 6);
    InsertionAtTail(tail, 7);

    print_LL(head);

    return 0;
}