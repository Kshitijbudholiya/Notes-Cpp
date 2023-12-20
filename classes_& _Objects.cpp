#include<iostream>
using namespace std;

// OOP 

class MyHome
{
public:
    int room = 2; // Attributes/Properties
    void sum()
    {
        int valueOne = 5, valueTwo = 10;
        cout<<valueOne+valueTwo<<"\n";
    }
};

int main()
{
    // MyHome obj; // // Half Syntex
    MyHome obj = MyHome(); // Full Syntex <Better To Use>
    obj.sum();
    cout<<obj.room;
    return 0;
}