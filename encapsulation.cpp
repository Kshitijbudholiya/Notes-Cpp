#include<iostream>
using namespace std;

class ITM
{
    private:
    string fullName;
    string branch;

    public:
    // Setter --> Write access
    void setFullName(string fullNameIs)
    {
        fullName = fullNameIs;
    }

    // Getter --> Read Access
    string getFullName()
    {
        return fullName;
    }

    // Setter --> Write access
    void setBranch(string branchIs)
    {
        if (isupper(branchIs[0]))
        {
            branch = branchIs;
        }
    }

    // Getter --> Read Access
    string getBranch()
    {
        return branch;
    }
};

int main()
{
    ITM obj = ITM();
    obj.setFullName("Kshitij Budholiya");
    obj.setBranch("AIML");
    cout<<obj.getFullName()<<endl;
    cout<<obj.getBranch();
    return 0;
}




/*

Wrong Method.

#include<iostream>
using namespace std;

class ITM
{
    public:
    int num;
};

int main()
{
    ITM obj = ITM();
    obj.num = 100;
    cout<<obj.num;
    return 0;
}

*/