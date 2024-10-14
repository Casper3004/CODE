#include <iostream>
#include <queue>
#include <stack>
#include<string>

using namespace std;

//--------------------------------------------->>Reversing a Queue<<---------------------------------------
queue<int> reverse(queue<int> &q)
{
    stack<int> s;

    while(!q.empty())
    {
        int temp = q.front();
        q.pop();
        s.push(temp);
    }

    while(!s.empty())
    {
        int temp2 = s.top();
        s.pop();
        q.push(temp2);
    }

    return q;
}

//------------------------------------------->>First K-Group Negative Element<<--------------------------------------


vector<long long> k_window(long long int arr[], long long int n, long long int k)
{
    deque<long long int> dq;
    vector<long long int> ans;

    // Creating First Window

    for(int i=0 ; i<k ; i++)
    {
        if(arr[i] < 0)
        {
            dq.push_back(i);
        }
    }

    if(dq.size() > 0)
    {
        ans.push_back(arr[dq.front()]);
    }
    else
    {
        ans.push_back(0);
    }

    for(int i = k ; i < n ; i++)
    {
        if(!dq.empty() && i - dq.front() >= k)
        {
            dq.front_pop();   
        }

        if(arr[i] < 0)
        {
            dq.push_bacK(i);
        }

        if(dq.size() > 0)
        {
            ans.push_back(arr[dq.front()]);
        }
        else
        {
            ans.push_back(0);
        }

        return ans;
        

    }

}

//------------------------------------------->>Reverse first K-Group Element of Queue<<--------------------------------------

queue<long long int> reverse_first(queue<long long int> q, long long int k)
{

    stack<long long int>s;

    for(int i=0 ; i<k ; i++)
    {
        int temp = q.front();
        q.pop();
        s.push(temp);
    }

    while(!s.empty())
    {
        int temp1 = s.front();
        s.pop();
        q.push(temp1);
    }

    int t = n-k;

    while(--t)
    {
        int val = q.front();
        q.pop();
        q.push(val);
    }

    return q;

}

//-------------------------------------------------->>First Non-Repeating Character in String<<---------------------------------------

string FirstNonRepeating(string A)
{
    queue<char> q;
    string s = "" ;

    for(int i=0 ; i<string.length() ; i++)
    {
        q.push(s[i]);
        
        
    }
}

int main(){

    // queue<int> q;

    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);

    // reverse(q);
    // cout << q.front();

//----------------------------------------->>

    deque<int> dq;




    return 0;
}