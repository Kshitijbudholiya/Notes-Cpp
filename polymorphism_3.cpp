#include<iostream>
using namespace std;

// Topic 2. Method Overriding.

class Parent
{
    public:
    void show()
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
    obj.show();
    return 0;
}