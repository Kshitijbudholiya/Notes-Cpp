#include<iostream>
using namespace std;

/*
This is called as Methord Overiding.
It is a part of Polymorpism.
*/

class ParentOne
{
    public:
    void show()
    {
        cout<<"Parent";
    }
};

class Child : public ParentOne
{
    public:
    void show()
    {
        cout<<"Child";
    }
};

int main()
{
    Child obj = Child();
    obj.show();
    return 0;
}