#include<iostream>
using namespace std;

class shivam
{
    public:
    int a = 15, b = 12;
};

class yash:public shivam
{
    public:
    void add()
    {
        cout<<"The sum is "<<a+b<<endl;
    }
};

class mash:public shivam
{
    public:
    void into()
    {
        cout<<"The multiple is "<<a*b<<endl;
    }
};

class raman:public shivam
{
    public:
    void devide()
    {
        cout<<"The Devision is "<<a/b<<endl;
    }
};

int main()
{
    yash obj;
    obj.add();

    mash obj2;
    obj2.into();

    raman obj3;
    obj3.devide();
    return 0;
}