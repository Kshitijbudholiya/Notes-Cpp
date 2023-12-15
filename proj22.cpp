#include<iostream>
using namespace std;

class ClassOne
{
    public:
    int numClassOne = 1;
    string stringClassOne = "One";
    
    void defClassOne()
    {
        cout<<"Variables in ClassOne are: "<<numClassOne<<" & "<<stringClassOne<<endl;
        cout<<"It is a default function of ClassOne"<<endl;
    }

    void paraClassOne(int paraOne, int paraTwo)
    {
        cout<<"It is a parametrized function in ClassOne which stores: "<<paraOne<<" & "<<paraTwo<<endl<<endl;
    }

    ClassOne(int paraOne, int paraTwo)
    {
        cout<<"It is a parametrized constructor in ClassOne which stores: "<<paraOne<<" & "<<paraTwo<<endl;
    }

    ClassOne()
    {
        cout<<"Default Constructor of ClassOne"<<endl;
    }
};

class ClassTwo
{
    public:
    int numClassTwo = 2;
    string stringClassTwo = "Two";
    
    void defClassTwo()
    {
        cout<<"It is a default function of ClassTwo"<<endl;
        cout<<"Variables in ClassTwo are: "<<numClassTwo<<" & "<<stringClassTwo<<endl;
    }

    void paraClassTwo(int paraOne, int paraTwo)
    {
        cout<<"It is a parametrized function in ClassTwo which stores: "<<paraOne<<" & "<<paraTwo<<endl<<endl;
    }

    ClassTwo(int paraOne, int paraTwo)
    {
        cout<<"It is a parametrized constructor in ClassTwo which stores: "<<paraOne<<" & "<<paraTwo<<endl;
    }

    ClassTwo()
    {
        cout<<"Default Constructor of ClassTwo"<<endl;
    }

    ~ClassTwo(){};
};

class ClassThree:public ClassOne, public ClassTwo
{
    public:
    int numClassThree = 3;
    string stringClassThree = "Three";
    
    void defClassThree()
    {
        cout<<"Variables in ClassThree are: "<<numClassThree<<" & "<<stringClassThree<<endl;
        cout<<"It is a default function of ClassThree"<<endl;
    }

    void paraClassThree(int paraOne, int paraTwo)
    {
        cout<<"It is a parametrized function in ClassThree which stores: "<<paraOne<<" & "<<paraTwo<<endl<<endl;
    }
    
    ClassThree(int paraOne, int paraTwo)
    {
        cout<<"It is a parametrized constructor in ClassThree which stores: "<<paraOne<<" & "<<paraTwo<<endl;
    }

    ClassThree()
    {
        cout<<"Default Constructor of ClassThree"<<endl;

        // Class Three
        ClassThree(12,13);
        defClassThree();
        paraClassThree(120, 24);
        
        // Class Two
        ClassTwo(45,47);
        defClassTwo();
        paraClassTwo(98, 54);

        // Class One
        ClassOne(39, 72);
        defClassOne();
        paraClassOne(29, 55);
    }

};

int main()
{
    ClassThree obj = ClassThree();
    return 0;
}
