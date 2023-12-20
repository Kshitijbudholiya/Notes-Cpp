#include<iostream>
using namespace std;

void defaultFunc()
{
    cout<<"Default func\n";
}

void paraFunc(int myNum)
{
    cout<<"Para func "<<myNum<<endl;
}

int main()
{
    defaultFunc();
    paraFunc(5);
    cout<<"Hello World";
    return 0;
}
