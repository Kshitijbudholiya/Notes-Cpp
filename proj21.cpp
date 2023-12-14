#include<iostream>
using namespace std;

class ITM
{
    public:
    int pubNum = 20;

    protected:
    int protNum = 40;
};

class ClassRoom:public ITM
{
    public:
    int numTwo = 36;

    void info()
    {
        cout<<protNum;
    }
};

int main()
{
    ClassRoom obj = ClassRoom();
    cout<<obj.pubNum<<endl;
    cout<<obj.numTwo<<endl;
    obj.info();
    return 0;
}