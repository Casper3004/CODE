#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
    
    Node(int data)
    {
        this-> data = data;
        this-> next = NULL;
    }
};

void Circular_Node(Node* &tail, int data)
{   
    Node* temp = new Node(data);
    tail-> next = temp;
    temp-> next = tail;
    tail = temp;
}

void print(Node* &head, Node* &tail)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp-> data << " ";
        temp = temp-> next;

        if(temp-> next == tail)
        {
            break;
        }
    }
    cout << endl;
}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    Circular_Node(tail, 12);
    print(head, tail);


    
    return 0;
}