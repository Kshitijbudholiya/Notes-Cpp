#include<iostream>
using namespace std;

class ClassOne
{
    public:
    string name = "Kshitij";
    int age = 17;

    ClassOne()
    {
        cout<<"Default Constructor for ClassOne"<<endl;
    }

    ClassOne(int paraOne, int paraTwo)
    {
        cout<<"Parametrized Constructor of ClassOne:- Num One: "<<paraOne<<" Num Two: "<<paraTwo<<endl;
    }

    void classOneDefMethod()
    {
        cout<<"This is Default Method of Class One"<<endl;
    }

    void classOneParaMethod(int paraOne, int paraTwo)
    {
        cout<<"This is Paramerized Method of Class One: "<<paraOne<<" ,"<<paraTwo<<endl;
    }
};

class ClassTwo : public ClassOne
{
    public:
    string name = "Deepak";
    int age = 18;

    ClassTwo()
    {
        cout<<"Default Constructor for ClassTwo"<<endl;
    }

    ClassTwo(int paraOne, int paraTwo) : ClassOne(paraOne, paraTwo)
    {
        cout<<"Parametrized Constructor for ClassTwo:- Num One: "<<paraOne<<" Num Two: "<<paraTwo<<endl;
    }

    void classTwoDefMethod()
    {
        cout<<"This is Default Method of Class Two"<<endl;
    }

    void classTwoParaMethod(int paraOne, int paraTwo)
    {
        cout<<"This is Paramerized Method of Class Two: "<<paraOne<<" ,"<<paraTwo<<endl;
        classOneDefMethod();
        classOneParaMethod(paraOne, paraTwo);
    }
};


class ClassThree : public ClassTwo
{
    public:
    string name = "Suraj";
    int age = 19;

    ClassThree()
    {
        cout<<"Default Constructor for ClassThree"<<endl;
        ClassThree(56,76);
    }

    ClassThree(int paraOne, int paraTwo) : ClassTwo(paraOne, paraTwo)
    {
        cout<<"Parametrized Constructor for ClassThree:- Num One: "<<paraOne<<" Num Two: "<<paraTwo<<endl;
        classThreeDefMethod();
    }

    void classThreeDefMethod()
    {
        cout<<"This is Default Method of Class Three"<<endl;
        classThreeParaMethod(76, 77);
    }

    void classThreeParaMethod(int paraOne, int paraTwo)
    {
        cout<<"This is Paramerized Method of Class Three: "<<paraOne<<" ,"<<paraTwo<<endl;
        classTwoDefMethod();
        classTwoParaMethod(14,25);
    }

};

int main()
{
    ClassThree obj = ClassThree();
    return 0;
}