#include<iostream>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;

    petrolPump(int data, int distance)
    {
        this-> data = data;
        this-> distance = distance;
    }
}

class solution
{
    public:

        int tour(petrolPump p[], int n)
        {
            int bal = 0;
            int defi = 0;
            int strt = 0;

            for(int i=0 ; i<n ; i++)
            {
               bal += petrol[i];
               

               if((distance[i] - bal) < 0)
               {
                    bal = 0;
               }
            }


        }
}

int main(){



    return 0;
}