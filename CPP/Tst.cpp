#include<iostream>
#include<vector>
using namespace std;

class node
{
    public:
        int data;
        node* left;
        node* right;

    node(int data)
    {
        this-> data = data;
        this-> left = NULL;
        this-> right = NULL;
    }
};

node* buildingTree(node* root)
{
    cout << "Input Data : " << endl;
    int data;
    cin >> data;

    root = new node(data);

    if(data == -1)
    {
        return NULL;
    }

    cout << "Input data for left node " << data << endl;
    root-> left = buildingTree(root-> left);
    cout << "Input data for right node " << data << endl;
    root-> right = buildingTree(root-> right);

    return root;

}

int main(){
        
    // node* root = NULL;

    // root = buildingTree(root);

    // vector<int> vec;

    // vec.push_back(1);
    // vec.push_back(3);
    // vec.push_back(2);

    // int *ptr = &vec[1];

    // ptr++;

    // cout << *ptr <<endl;

    int arr[5] = {1,2,3,4,5};

   

    int *ptr = &arr[0];

    cout << *ptr << endl;

    return 0;
}
//------------------------------------------------------->>



// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {

//         int *ptr1 = &nums[1];
//         int *ptr2 = &nums[2];

//         vector<int> expectedNums;

//         for(int i=0 ; i<nums.size() ; i++)
//         {
//             if(*ptr1 != *ptr2)
//             {
//                 expecetedNums.push_back(*ptr1);
//                 expecetedNums.push_back(*ptr2);

//                 ptr1 = ptr2++;
//                 ptr2 = ptr1++;
//             }
//             else
//             {
//                 expectedNums.push_back(*ptr1);
                
//             }
//         }   
//     }
// };