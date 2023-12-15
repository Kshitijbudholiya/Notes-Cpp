// Inheritance

#include<iostream>
using namespace std;

class GParent
{
    public:
        GParent()
        {
            cout << "GParent prop"<<endl;
        }
};

class Parent : public GParent
{
    public:
        Parent() : GParent()
        {
            cout << "Parent prop"<<endl;
        }
};

class Child : public Parent
{
    public:
        Child() : Parent()
        {
            cout << "Child prop"<<endl;
        }
};

int main()
{
    Child ch = Child();
    return 0;
}