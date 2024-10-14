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

Node* buildingTree(Node* root)
{
    cout << "Enter your Data " << endl;
    int data;
    cin >> data;

    root = new Node(data);

    if(data == -1)
    {
        return NULL;
    }

    cout << "Enter your left node : " << data << endl;
    root->left = buildingTree(root-> left);
    cout << "Enter your right node : " << data << endl;
    root-> right = buildingTree(root-> right);

    return root;
}

void level_Order_trav(Node* root)
{
    queue <Node*> q;
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
        }else{

            cout << temp-> data << " ";
            if(temp-> left)
            {
                q.push(temp-> left);           
            }

            if(temp-> right)
            {
                q.push(temp-> right);
            }
        }
    }

}

//------------------------------------------------>>Level Order Creation Of Tree<<---------------------------------------

Node* level_order_create(Node* root)
{
    cout << "Enter data of node : " << endl;
    int data;
    cin >> data;

    root = new Node(data);

    root-> left = level_order_create(root-> left);
    
    
}

int main(){

    Node* root = NULL; 
    root = buildingTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    level_Order_trav(root);

    return 0;
}