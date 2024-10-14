#include<iostream>
#include<queue>

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
    cout << "Enter your data " << endl;
    int data;
    cin >> data;

    root = new Node(data);

    if(data == -1)
    {
        return NULL;
    }

    cout << "Enter your data for left node of " << data << endl;
    root-> left = binary_tree(root-> left);

    cout << "Enter your data for right node of " << data << endl;
    root-> right  = binary_tree(root-> right);

    return root;
}

//-------------------------------------------------->>Level order Traversal<<-------------------------------------------------

void level_order_traversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL)
        {   
            cout << endl;
            
            if(!q.empty())
            {   
                q.push(NULL);
            }
        }
        else
        {
            cout << temp-> data <<" ";

            if(temp-> left)
            {   
                q.push(temp->left);
            }

            if(temp-> right)
            {
                q.push(temp->right);
            }   

        }

    }
    
}

//------------------------------------------------------->>Reverse Level Order Traversal<<---------------------------------------------

void reverse_level_order_traversal(Node* root)
{
    
}

int main(){

    Node* root = NULL;
    root = binary_tree(root);

    level_order_traversal(root);

    return 0;
}