/*
Control Statements.
1. If Else.
2. Loops.
*/

// 1. If-else statement.

#include<iostream>
using namespace std;

int main()
{
    int num = 15;

    // Simple If Statement.
    if (num == 15)
    {
        cout<<"This is if statement."<<endl;
    }

    // If else Statement.
    if(num < 10)
    {
        cout<<"If Satement."<<endl;
    }else{
        cout<<"Else Statement."<<endl;
    }

    // If else if else Satement.
    if(num < 10)
    {
        cout<<"If Satement."<<endl;
    }else if(num > 10){
        cout<<"Else if Block."<<endl;
    }
    else{
        cout<<"Else Statement."<<endl;
    }
    return 0;
}