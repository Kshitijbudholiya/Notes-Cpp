// Inheritance

#include<iostream>
using namespace std;

class ParentOne
{
    public:
        void parentOneMethod()
        {
            cout << "ParentOne prop"<<endl;
        }
};

class ParentTwo 
{
    public:
        void parentTwoMethod()
        {
            cout << "ParentTwo prop"<<endl;
        }
};

class Child : public ParentOne,public ParentTwo
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
    ch.parentOneMethod();
    ch.parentTwoMethod();
    ch.childMethod();
    
    return 0;
}