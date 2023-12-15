// Inheritance

#include<iostream>
using namespace std;

class Parent
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
    ch.parentMethod();
    ch.childMethod();

    return 0;
}