#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void myMethod() = 0;
};

class Derived : public Base
{
    public:
    void myMethod()
    {
        cout<<"This is my method";
    }
};

int main()
{
    Derived obj = Derived();
    obj.myMethod();
    return 0;
}