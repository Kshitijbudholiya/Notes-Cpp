#include<iostream>
using namespace std;

// Diamond Problem

class GrandParent
{
    public:
    int numOne = 25;
};

class ParentOne : public GrandParent
{
    public:
    int numTwo = 03;
};

class ParentTwo : public GrandParent
{
    public:
    int numThree = 20;
};

class Child : public ParentOne, public ParentTwo
{
    public:
    int numThree = 06;
    Child()
    {
        cout<<numOne<<endl; // This will return an error
        cout<<numTwo<<endl;
        cout<<numThree<<endl;
    }
};

int main()
{
    Child obj = Child();
    return 0;
}