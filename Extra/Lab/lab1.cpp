#include<iostream>
using namespace std;

class A
{
    public:
    int a, b; // Data Members
    void getValue()
    {
        cout<<"Enter math's marks: ";
        cin>>a;
        cout<<"Enter english marks: ";
        cin>>b;
    }
};

class B : public A
{
    public:
    void add()
    {
        cout<<"Sum is: "<<a+b<<endl;
    }
};

class C : public B
{
    public:
    void product()
    {
        cout<<"Product is: "<<a*b<<endl;
    }
};

class D
{
    public:
    void display()
    {
        cout<<"BYE-BYE.............Mere Dost"<<endl;
    }
};

class E : public C, public D
{
    public:
    void divide()
    {
        float c = a/b;
        cout<<"Devision is: "<<c<<endl;
    }
};

int main()
{
    E obj = E();
    obj.getValue();
    obj.product();
    obj.divide();
    obj.add();
    obj.display();
    return 0;
}