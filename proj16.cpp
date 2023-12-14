#include<iostream>
using namespace std;

class MyClass
{
    public:
    int numOne, numTwo;
    string name;

    MyClass(int numOne, int numTwo, string name)
    {
        this->numOne = numOne;
        this->numTwo = numTwo;
        this->name = name; //Used to 
    }

    void one()
    {
        cout<<"One"<<endl;
        two(); // It is equivalent to this->two()
        cout<<name<<endl;
    }

    void two()
    {
        cout<<"Two"<<endl;
    }
};

int main()
{
    MyClass obj = MyClass(25,30, "Kshitij");
    MyClass obj2 = MyClass(20,35, "Sharma");
    // cout<<obj.numOne<<endl<<obj.numTwo<<endl<<objname<<endl;
    obj.one();
    return 0;
}