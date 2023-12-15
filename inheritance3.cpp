// Inheritance

#include<iostream>
using namespace std;

class GrandParent
{
    public:
        void grandParentMethod()
        {
            cout << "Grand Parent prop"<<endl;
        }
};

class Parent : public GrandParent
{
    public:
        void parentMethod()
        {
            cout << "Parent prop"<<endl;
        }
};

class Child : public Parent
{
    public:
        void childMethod()
        {
            cout << "Child prop"<<endl;
        }
};

int main()
{
    Child ch = Child();
    ch.grandParentMethod();
    ch.parentMethod();
    ch.childMethod();

    Parent p1 = Parent();
    p1.grandParentMethod();
    p1.parentMethod();
    return 0;
}