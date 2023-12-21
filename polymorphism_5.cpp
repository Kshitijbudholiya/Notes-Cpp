#include<iostream>
using namespace std;

// Topic 3. Operator Overriding.

class Child
{
    public:
    string show()
    {   
        return "Child ";
    }
};

int main()
{
    Child obj = Child();
    Child obj2 = Child();
    string var = obj.show() + obj2.show();
    cout<<var;
    return 0;
}