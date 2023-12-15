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
};

int main()
{
    Child ch = Child();
    ch.parentMethod();

    return 0;
}