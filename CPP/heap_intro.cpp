#include<iostream>
using namespace std;

class heap
{
    public:
        int arr[100];
        int size;

        heap()
        {
            arr[0] = -1;
            size = 0;
        }

        void insert(int val)
        {
            size = size+1;
            int index = size;

            arr[index] = val;

            while(index > 1)
            {
                int parent = index/2;

                if(arr[parent] < arr[index])
                {
                    swap(arr[parent], arr[index]);
                    index = parent;
                }
                else
                {
                    return ;
                }
            }
        }


        void print()
        {
            for(int i=1 ; i<=size ; i++)
            {
                cout << arr[i] <<" ";
            }cout << endl;
        }


        void deletion()
        {
            swap(arr[1], arr[size]);
            size --;

            int i=1;

            while(i<size)
            {
                int leftindex = i*2;
                int rightindex = (i*2) + 1;

                if(arr[i] < arr[leftindex] && leftindex < size)
                {
                    swap(arr[i], arr[leftindex]);
                    i = leftindex;
                }
                else if(arr[i] < arr[rightindex] && rightindex < size)
                {
                    swap(arr[i], arr[rightindex]);
                    i = rightindex;
                }
                else
                {
                    return;
                }
            }

        }

};

void heapify(int arr[], int size, int i)
{
    int largent  = i;
    int left = 2*i;
    int right = (2*i) + 1;

    if( left < size && arr[largest] < arr[left])
    {
        largest = left;
    }

    if( right < size && arr[largest] < arr[right])
    {
        largest = right;
    }

    if(largest != i)
    {
        swap(arr[largest], arr[i]);
    }
}

int main(){

    heap h;

    h.insert(50);
    h.insert(30);
    h.insert(20);
    h.insert(10);
    h.insert(40);

    h.print();
     
    return 0;
}