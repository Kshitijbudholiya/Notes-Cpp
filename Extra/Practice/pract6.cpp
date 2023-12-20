#include<iostream>
using namespace std;

class AIML
{
    public:
    int myAge;
    string myName;
    float myHeight;

    AIML(int ageIs, string nameIs, float heightIs)
    {
        myAge = ageIs;
        myName = nameIs;
        myHeight = heightIs;
    }

    void details()
    {
        cout<<"The details of student is as follows: "<<endl;
        cout<<"Name: "<<myName<<endl<<"Age: "<<myAge<<endl<<"Height: "<<myHeight<<endl;
    }

};

int main()
{
    AIML std1 = AIML(17, "Kshitij", 5.7);
    AIML std2 = AIML(19, "Suraj", 5.4);
    std1.details();
    std2.details();
    return 0;
}