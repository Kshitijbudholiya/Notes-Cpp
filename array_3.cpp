#include<iostream>
using namespace std;

int main()
{
    int arr[3][3][3] = {};
    for (int firstRow = 0; firstRow < 3; firstRow++)
    {
        for (int secondRow = 0; secondRow < 3; secondRow++)
        {
            for (int thirdRow = 0; thirdRow < 3; thirdRow++)
            {
                arr[firstRow][secondRow][thirdRow] = firstRow + secondRow + thirdRow;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {   
        for (int j = 0; j < 3; j++)
        {   
            for (int k = 0; k < 3; k++)
            {   
                cout<<arr[i][j][k]<<", ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}