#include<iostream>
using namespace std;

// Topic 3: Operator Overriding

class MyClass
{
    public:
    int numOne, numTwo;

    MyClass(int numOne = 0, int numTwo = 0)
    {
        this->numOne = numOne;
        this->numTwo = numTwo;
    }

    MyClass operator + (MyClass obj)
    {
        MyClass result;
        result.numOne = numOne + obj.numOne;
        result.numTwo = numTwo + obj.numTwo;
        return result;
    }

    void print()
    {
        cout<<numOne<<endl;
        cout<<numTwo;
    }
};

int main()
{
    MyClass obj1 = MyClass(12, 25);
    MyClass obj2 = MyClass(13, 35);
    MyClass obj3 = obj1 + obj2;
    obj3.print();
    return 0;
}