#include<iostream>
using namespace std;

class GrandParent
{
    public:
    int numOne = 25;

    protected:
    int protNum = 91;
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

    void info()
    {
        cout<<protNum<<endl;
        cout<<numOne<<endl;
    }
};

class Child : public ParentOne, public ParentTwo
{
    public:
    int numThree = 06;
    Child()
    {
        info();
        cout<<numTwo<<endl;
        cout<<numThree<<endl;
    }
};

int main()
{
    Child obj = Child();
    return 0;
}