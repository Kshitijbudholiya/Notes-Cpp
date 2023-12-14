#include<iostream>
using namespace std;

class MyClass
{
    public:
    void defMethod()
    {
        cout<<"It is a Default Method."<<endl;
    }
    void paraMethod(int numOne, int numTwo)
    {
        cout<<"Parametric Method, The Sum is: "<<numOne+numTwo;
    }
};

int main()
{
    MyClass obj = MyClass();
    obj.defMethod(); // Calling Default Method
    obj.paraMethod(23, 32); // Calling Para Method
    return 0;
}