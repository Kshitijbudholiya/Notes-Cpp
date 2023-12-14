#include<iostream>
using namespace std;

class Student
{
    public:
    int age;
    string name;
    float height;

    Student(string nameIs, int ageIs, float heightIs)
    {
        name = nameIs;
        age = ageIs;
        height = heightIs;
    }
};

int main()
{
    Student obj = Student("A", 17, 5.8);
    cout<<obj.name<<endl<<obj.age<<endl<<obj.height;
    return 0;
}