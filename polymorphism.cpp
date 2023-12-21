#include<iostream>
using namespace std;

// Topic 1. Method Overloading.
// With different number of parameters.

class Calc
{
    public:
    void add(int numOne, int numTwo)
    {   
        cout<<numOne + numTwo<<endl;
    }
    void add(int numOne, int numTwo, int numThree)
    {   
        cout<<numOne + numTwo + numThree<<endl;
    }
};

int main()
{
    Calc obj = Calc();
    obj.add(12,15, 17);
    obj.add(19,47);
    return 0;
}