#include<iostream>
#include<stack>

using namespace std;

class queue
{
    int *arr;
    int qfront;
    int rear;
    int size;

    public:
        queue()
        {
            size = 10001;
            arr = new int[size];
            qfront = 0;
            rear = 0;
        }

        void enqueue(int data)  //push operation
        {
            if(rear == size)
            {
                cout << "queue is full " << endl;
            }
            else
            {
                arr[rear] = data;
                rear++;
            }
        }

        int dequeue()  //pop operation
        {
            if(qfront == rear)
            {
                return -1;
            }
        
            else
            {   
                int ans = arr[qfront];

                arr[qfront] = -1;
                qfront++;

                if(qfront == rear)
                {
                    qfront = 0;
                    rear = 0;
                }

            return ans;
            }
        }

        int front()
        {
            if(qfront == rear)
            {
                return -1;
            }
            else
            {
                return arr[qfront];
            }
        }

        bool empty()
        {
            if(qfront == rear)
            {
                return true;
            }else
            {
                return false;
            }
        }
    
};

int main(){

    queue* q = new queue();

    (*q).enqueue(12);
    (*q).enqueue(13);

    cout << (*q).front();

    return 0;
}