#include<iostream>
using namespace std;

// Age, Name Height

class Student
{
public:
    // int Age;
    // float Height;
    // string Name;
    void details(int Age, float Height, string Name)
    {
        cout<<Age<<" "<<Height<<" "<<Name;
    }
};

int main()
{
    Student shivam = Student();
    return 0;
}
