#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int data)
    {
        this-> data = data;
        this-> left = NULL;
        this-> right = NULL;
    }
};

Node* binary_tree(Node* root)
{
    cout << "Enter Your Data :" << endl;
    int data;
    cin>>data;
    root = new Node(data); 

    if(data == -1)
    {
        return NULL;
    }

    cout << "Input data for left of " << data << endl;
    root-> left = binary_tree(root-> left);
    cout << "Inpur data for right of  " << data << endl;
    root-> right = binary_tree(root-> right);
    return root; 

}

int main(){

    Node* root = NULL;

    //building tree
    root = binary_tree(root);

    return 0;
}