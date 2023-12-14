/*
    Functions are of mainly of two types:
    1. Returnable --> Default & Parametrized.
    2. Non-returnable --> Default & Parametrized.   
*/

#include<iostream>
using namespace std;

int prntNum()
{
    int num = 15;   
    return num;
}

int sum(int numOne, int numTwo)
{
    int sum = numOne + numTwo;
    return sum;
}

void def()
{
    cout<<"This is a default non-returnable func"<<endl;
}

void parametrized(int numIs)
{
    cout<<"This is a parametrized non-returnable func"<<numIs;
}

int main()
{
    cout<<prntNum()<<endl;
    cout<<sum(13, 10)<<endl;
    def();
    parametrized(34);
    return 0;
}