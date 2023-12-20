#include<iostream>
using namespace std;

class Circle
{
    int radius = 108;

    public: 
    void circumference()
    {
        cout<<"The circumfernce of circle of radius "<<radius<<" is : "<<2*3.14*radius<<endl;
    }
    void area()
    {
        cout<<"The area of circle of radius "<<radius<<" is : "<<3.14*radius*radius;
    }
};

int main()
{
    Circle obj = Circle();
    obj.circumference();
    obj.area();
    return 0;
}