#include<iostream>
using namespace std;

int main()
{
    // int arr[] = {12, 25, 36, 598};
    string arr[] = {"Kshitj", "Budholiya"};
    string concat;
    for(string &strng:arr)
    {
        concat = strng + concat;
        cout<<strng<<endl;
    }
    cout<<concat;
    return 0;
}