#include<iostream>
using namespace std;

int sum(int a, int b)
{
    return a+b;
}

// void sum(int a, int b)
// {
//     cout<<a+b<<endl;
// }

int main(){

    int a, b;
    cin>>a>>b;

    cout<<sum(a,b);


    return 0;
}