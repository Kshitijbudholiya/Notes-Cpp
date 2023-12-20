#include<iostream>
using namespace std;

class Student
{
    public:
    int age;
    string name;
    float height;

    Student(int ageIs, string nameIs, float heightIs)
    {
        name = nameIs;
        age = ageIs;
        height =heightIs;
    }
};

int main()
{
    Student shivam = Student(18, "Shivam", 5.7);
    cout<<shivam.name<<endl<<shivam.age<<endl<<shivam.height<<endl;

    Student yash = Student(17, "Yash", 5.4);
    cout<<yash.name<<endl<<yash.age<<endl<<yash.height;
    return 0;
}