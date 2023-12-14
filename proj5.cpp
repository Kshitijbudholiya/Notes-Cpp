#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    float height;
    int age;

    Student(string s, float h, int a) 
    {
        name = s;
        height = h;
        age = a;
    }
};

int main()
{
    // Student 1
	Student shivam = Student("Shivam", 5.7, 18);
	Student yash = Student("Yash", 5.5, 17);

    cout<<"The Details of Shivam"<<endl;
    cout<<shivam.name<<endl<<shivam.height<<endl<<shivam.age<<endl;

    cout<<"The Details of Yash"<<endl;
    cout<<yash.name<<endl<<yash.height<<endl<<yash.age;
    return 0;
}
