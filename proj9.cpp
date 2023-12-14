// // Default Constructors.

#include<iostream>
using namespace std;

class Student
{
    public:
    int age;
    float height;
    string name;

    Student()
    {
        age = 17;
        height = 5.7;
        name = "Kshitij";
    };
};

int main()
{
    Student studentOne = Student();
    cout<<studentOne.name<<endl<<studentOne.age<<endl<<studentOne.height<<endl;
    return 0;
}

// // Paramatrices Constructors.

// #include<iostream>
// using namespace std;

// class Student
// {
//     public:
//     int age;
//     string name;
//     float height;

//     Student(string nameIs, int ageIs, float heightIs)
//     {
//         name = nameIs;
//         age = ageIs;
//         height = heightIs;
//     }
// };

// int main()
// {
//     Student std1 = Student("Kshitij", 17, 5.7);
//     cout<<std1.name<<endl<<std1.age<<endl<<std1.height;
//     return 0;
// }

// // Copy Constructor.
// // 1. Default Copy Constructor.

// #include<iostream>
// using namespace std;

// class Student
// {
//     public:
//     string name;
//     int age;
//     float height;
//     Student(string nameIs, int ageIs, float heightIs)
//     {
//         name = nameIs;
//         age = ageIs;
//         height = heightIs;
//     }
//     void getInfo()
//     {
//         cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Height: "<<height<<endl;
//     }
// };

// int main()
// {
//     Student studentOne = Student("Kshitij", 17, 5.7);
//     studentOne.getInfo();

//     Student studentTwo = Student(studentOne);
//     cout<<"The Copy Constructor"<<endl;
//     studentTwo.getInfo();
//     return 0;
// }

// // 2. User-Defined Copy Constructor.

// #include<iostream>
// using namespace std;

// class Student
// {
//     public:
//     int numOne, numTwo;
//     Student(int numOneIs, int numTwoIs)
//     {
//         numOne = numOneIs;
//         numTwo = numTwoIs;
//     }

    // Student(Student &copyNumOne, Student &copyNumTwo) // Copy Constructor
    // {
    //     numOne = copyNumOne.numOne;
    //     numTwo = copyNumTwo.numTwo;
    // }
// };

// int main()
// {
    // Student studOne = Student(33, 45);
    // Student studTwo = Student(studOne);
    // cout<<studTwo.numOne<<endl<<studTwo.numTwo;
//     return 0;
// }
