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
    cout << "Enter your data "<< endl;
    int data;
    cin>> data;

    root = new Node(data);

    if(data == -1)
    {
        return NULL;
    }

    cout << "Enter data for left node of " << data <<endl;
    root-> left = binary_tree(root-> left);

    cout <<"Enter data for right node of " << data <<endl;
    root-> right = binary_tree(root-> right);

    return root;
}

//--------------------------------------------------->>Inorder Traversal [LNR]<<----------------------------------------------------

void inorder_Traversal(Node* root)
{

    if(root == NULL)
    {   
        return;
    }

    inorder_Traversal(root-> left);
    cout << root-> data << " ";
    inorder_Traversal(root-> right);
}

//---------------------------------------------------->>PreOrder Traversal [NLR]<<--------------------------------------------------

void preorder_Traversal(Node* root)
{   
    
    if(root == NULL){
        return;
    }

    cout << root-> data << " ";

    preorder_Traversal(root-> left);
    preorder_Traversal(root-> right);

}

//--------------------------------------------------->>PostOrder Traversal [LRN]<<-----------------------------------------------

void postOrder_Traversal(Node* root)
{
    if(root == NULL)
    {
        return;
    }

    postOrder_Traversal(root-> left);
    postOrder_Traversal(root-> right);
    cout << root-> data << " ";
}

//x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x

int main(){

    Node* root = NULL;
    root = binary_tree(root);

    cout << "Inorder Traversal : " << endl;
    inorder_Traversal(root);

    cout << endl;

    cout << "PreOrder Traversal : " << endl;
    preorder_Traversal(root);

    cout << endl;

    cout << "PostOrder Traversal : " << endl;
    postOrder_Traversal(root);

    return 0;
}