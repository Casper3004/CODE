#include<iostream>
using namespace std;

class Hero
{
    private:
        int health;

    public:
        string name;
        char level;
        int round;

    // constructor 

    Hero(int round, char level)
    {
        this-> round = round;
        this-> level = level;
    }

    void setHealth(int health)
    {
        this-> health = health;
    }

    void getHealth()
    {
        cout << "Health is " << health << endl;
    }

};

int main(){
    
    Hero *a = new Hero(2, 'A');

    // a->name = "Paul";





    return 0;
}