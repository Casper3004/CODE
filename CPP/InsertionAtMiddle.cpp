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

void InsertionAtEnd(int data, Node* tail)
{
    Node* temp = new Node(data);
    tail-> next = temp;
    tail = tail-> next;
}

void InsertionAtMiddle(Node* &head, int posi, int data)
{   
    Node* temp = head;
    int crnt = 0;

    while(crnt != posi-1)
    {
        temp = temp->next;
        crnt++;
    }

    Node* temp1 = new Node(data);
    temp1-> next = temp-> next; 
    temp-> next = temp1;    
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


int main(){

    Node* node3 = new Node(10);
    Node* head = node3;
    Node* tail = node3;

    return 0;
}