#include<iostream>
using namespace std;

// Topic 1. Method Overloading.
// With different datatype of parameter.

class Calc
{
    public:
    void add(int numOne, int numTwo)
    {   
        cout<<numOne + numTwo<<endl;
    }
    void add(string numOne, string numTwo)
    {   
        cout<<numOne + numTwo<<endl;
    }
};

int main()
{
    Calc obj = Calc();
    obj.add("Hello ", "World");
    obj.add(19,47);
    return 0;
}