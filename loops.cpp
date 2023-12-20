#include<iostream>
using namespace std;


// 2. Loops
int main()
{
    // For loop
    cout<<"For Loop"<<endl;
    for (int num = 1; num<=10; num++)
    {
        cout<<num<<endl;
    }


    // While loop
    cout<<endl<<"While Loop"<<endl;
    int number = 1;
    while (number <= 5)
    {
        cout<<number<<endl;
        number++;
    }
    

    // Do-While loop
    cout<<endl<<"Do-While Loop"<<endl;
    int value = 1;
    do
    {
        cout<<value<<endl;
        value++;
    } while (value <= 5);
    
    return 0;
}