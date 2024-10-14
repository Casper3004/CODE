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

void InsertAtTail(Node* &tail, int data)
{
    Node* temp = new Node(data);

    tail-> next = temp;
    temp-> next = NULL;
    tail = temp;
}

void print(Node* &head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp-> data << " ";
        temp = temp-> next;
    }
    cout << endl;
}

//-------------------->>Approach 1(With Loops)<<--------------------------------------

void Reversing_LL(Node* &head, Node* &tail)
{
    Node* curr = head;
    Node* prev = NULL;
    Node* next = head;

    while(curr != NULL)
    {   
        next = curr-> next;
        curr-> next = prev;
        prev = curr;
        curr = next;
        head = prev;
    }
    
}

//------------------->>Approach 2(With Recursion)<<--------------------------------

Node Reversing_LL_Recursively(Node* &head, Node* &next, Node* &prev, Node* &curr)
{
    if(curr == NULL)
    {   
        return *prev;
    }

    else
    {
        next = curr-> next;
        curr-> next = prev;
        prev = curr;
        curr = next;
        head = prev;

        Reversing_LL_Recursively(head, next, prev, curr);
    }
}

int main(){

    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    InsertAtTail(tail, 2);
    print(head);

    InsertAtTail(tail, 3);
    print(head);

    InsertAtTail(tail, 4);
    print(head);

    cout << "Reversed Linked List : " << endl;

    // Reversing_LL(head, tail);
    // print(head);

    Node* next = head;
    Node* prev = NULL;
    Node* curr = head;

    Reversing_LL_Recursively(head, next, prev, curr); 

    

    return 0;
}  