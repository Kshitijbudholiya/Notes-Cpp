#include<iostream>
using namespace std;

// Find the cause of the error.

class Parent
{
    public:
    void show(int num)
    {   
        cout<<"Parent"<<endl;
    }
};

class Child : public Parent
{
    public:
    void show()
    {   
        cout<<"Child"<<endl;
    }
};

int main()
{
    Child obj = Child();
    obj.show(7);
    return 0;
}