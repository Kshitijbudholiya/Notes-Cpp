#include<iostream>
using namespace std;

class Person
{
    string name;
    int age;
    string country;

    public:
    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setCountry(string country)
    {
        this->country = country;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getCountry()
    {
        return country;
    }
};

int main()
{
    Person obj = Person();
    obj.setName("Kshitij");
    obj.setAge(17);
    obj.setCountry("India");
    cout<<obj.getName()<<endl;
    cout<<obj.getAge()<<endl;
    cout<<obj.getCountry()<<endl;
    return 0;
}
