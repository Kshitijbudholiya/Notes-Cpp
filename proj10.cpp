#include<iostream>
using namespace std;

class Person
{
    public:
    string name;
    string sName;

    Person(string pName, string pSname)
    {
        name = pName;
        sName = pSname;
    }

    Person()
    {
        cout<<"Default Constructor."<<endl;
    }
};

int main()
{
    Person p1 = Person("Kshitij", "Budholiya");
    Person p2 = Person("Suraj", "Sharma");
    Person p3 = Person();
    cout<<p1.name<<" "<<p1.sName<<endl;
    cout<<p2.name<<" "<<p2.sName;
    return 0;
}