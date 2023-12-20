#include<iostream>
using namespace std;

// 3. Switch Cases
int main()
{
    int num;
    cout<<"Enter 1 or 2: ";
    cin>>num;

    // Switch Statement
    switch(num)
    {
        case 1:
            cout<<"You entered num 1";
            break;
        case 2:
            cout<<"You entered num 2";
            break;
        default:
            cout<<"Wrong Input";
            break;
    }
    return 0;
}