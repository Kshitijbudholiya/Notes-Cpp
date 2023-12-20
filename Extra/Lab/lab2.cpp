#include<iostream>
using namespace std;

// Diamond Problem.

class A
{
    public:
    void show()
    {
        cout<<"Hey...........Mere Dost"<<endl;
    }
};

class B : virtual public A
{
    public:
    void display()
    {
        cout<<"Hiiiiiiiiiiiiiiiii"<<endl;
    }
};

class C : virtual public A
{
    public:
    void print()
    {
        cout<<"Hello.............Mere Dost."<<endl;
    }
};

class D : public B, public C
{
    public:
    void divide()
    {
        cout<<"Bye-Bye.........Mere Dost"<<endl;
    }
};

int main()
{
    D obj = D();
    obj.show();
    obj.display();
    obj.print();
    obj.divide();
    return 0;
}