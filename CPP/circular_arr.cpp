#include<iostream>
using namespace std;

class CircularArray()
{
    private:

        int *arr;
        int size;
        int head;
        int tail;
        int count;

    public:

        CircularArray(int s)
        {
            arr = new int[];
            size = s;
            head = -1;
            tail = -1;  
            count = 0; 
        }

        bool isfull()
        {
            return count == size;
        }

        bool isempty()
        {
            return count == 0;
        }

        void enqueue(int value)
        {
            if(isfull())
            {
                cout << "Buffer if full" << endl;
                return;
            }

            if(head == -1)
            {
                head = 0;
            }

            tail = (tail+1) % size;
            arr[tail] = value;
            count++;
        }

        void dequeue()
        {
            if(isempty())
            {
                cout << "Buffer is empty" << endl;
                return;
            }

            head = (head + 1) % size;
            count--;

            if(count == 0)
            {
                head = -1;
                tail = -1;
            }
        }

        void display()
        {   
            if(isempty())
            {
                cout << "Buffer is empty" << endl;
            }
            int i = head;
            while(i != tail)
            {
                cout << arr[i] << " ";
                i++;
            }
            cout << arr[tail] << endl;
        }
};

int main(){
    
    return 0;
}