#include<iostream>
using namespace std;

/* Diffrence B/W Function and Methods */

void func()
{
    cout<<"This is function."<<endl;
}

class MyClass
{
    public:
    void method()
    {
        cout<<"It is a method."<<endl;
    }
};

int main()
{
    func(); // Calling Function
    MyClass obj = MyClass();
    obj.method(); //Calling Method
    return 0;
}