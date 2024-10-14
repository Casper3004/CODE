#include<iostream>
#include<stack>
using namespace std;

int main(){

    string str = "Preet";
    stack<char> s;

    for(int i=0; i<str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";

    while(!s.empty())
    {
        char ch2 = s.top();
        ans.push_back(ch2);

        s.pop();
    }
    
    return 0;
}