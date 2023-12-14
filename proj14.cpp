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
        this->name = name; // Used to Indicate Current Object.
    }

    ~MyClass()
    {
        cout<<"This is a destructor"<<endl;
    }
};

int main()
{
    MyClass obj = MyClass(25,30, "Kshitij");
    cout<<obj.numOne<<endl<<obj.numTwo<<endl<<obj.name<<endl;
    return 0;
}