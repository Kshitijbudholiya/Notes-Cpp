#include<iostream>
using namespace std;

class Student
{
    public:
    class StudentOne
    {
        public:
        int age = 19;
        float height = 5.7;
        string name = "Shivam";
    };

    class StudentTwo
    {
        public:
        int age = 17;
        float height = 5.6;
        string name = "Yash";
    };
};

int main()
{
    int num;
    cout<<"Student Details\n";
    cout<<"Enter 1 For First Student 2 For Second Student\n";
    cin>>num;
    if (num == 1)
    {
        Student::StudentOne obj = Student::StudentOne();
        cout<<"Details Of Student First\n";
        cout<<"Name: "<<obj.name<<endl<<"Age: "<<obj.age<<endl<<"Height: "<<obj.height<<endl;
    }else if(num == 2){

        Student::StudentTwo obj2 = Student::StudentTwo();
        cout<<"Details Of Student Second\n";
        cout<<"Name: "<<obj2.name<<endl<<"Age: "<<obj2.age<<endl<<"Height: "<<obj2.height<<endl;
    }else{
        cout<<"You hava entered a wrong value. Please try again";
    };
    return 0;
}
