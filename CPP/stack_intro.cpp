#include<iostream>
using namespace std;

class stack
{   
    //Attributes

    public:
        int *arr;
        int size;
        int top;

    //Behavior

    stack(int size)
    {
        this-> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if(size - top > 1)
        {
            top++;
            arr[top] = element;
        }else
        {
            cout<<"stack overflow"<<endl;
        }
    }

    void pop()
    {
        if(top >= 0)
        {
            top--;
        }else
        {
            cout << "Stack underflow " << endl;
        }
    }

    int peek()
    {
        if(top>0 || top < size){
        return arr[top];
        }else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool empty()
    {
        if(top == -1)
        {
            return true;
        }else
        {
            return false;
        }
    }
};
int main(){

    stack st(5);

    st.push(20);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;  

    st.pop();

    cout << st.peek() << endl;  

    return 0;
}