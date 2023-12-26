#include<iostream>
using namespace std;

class MyClass
{
    public:
    int num = 35;
    int* pnt = &num;

    void print()
    {
        cout<<num<<endl;
        cout<<pnt<<endl;
        cout<<&num;
    }
};

int main()
{
    MyClass obj = MyClass();
    obj.print();
    return 0;
}