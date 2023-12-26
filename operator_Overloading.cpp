#include <iostream>
using namespace std;
class Kshitij
{
    public:
        int numOne;

        Kshitij(int numOne = 0)
        {
            this->numOne = numOne;
        }

        Kshitij operator+(Kshitij obj)
        {
            Kshitij result;
            result.numOne = numOne + obj.numOne;
            return result;
        }
        
        void print()
        {
            cout << numOne << endl;
        }
};

int main()
{
    Kshitij obj1 = Kshitij(12);
    Kshitij obj2 = Kshitij(13);
    Kshitij obj3 = obj1 + obj2;
    obj3.print();
    return 0;
}