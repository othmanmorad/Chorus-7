#include <iostream>
#include <string>
#include <cstdlib>
#include<iomanip>
using namespace std;

int RandoomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void FillArrayByRandoomNumber(int arr[3][3] , short Rows ,short cols)
{
   
    for (short i = 0;i < Rows;i++)
    {
        {
            for (short j = 0;j < cols;j++)
                arr[i][j] = RandoomNumber(1, 100);
        }
        cout << "\n";
    }
}

void PrintArray(int arr[3][3] ,short Rows,short cols)
{
    for (short i = 0;i < Rows;i++)
    {
        {
            for (short j = 0;j < cols ;j++)
             cout<<setw(3)<<arr[i][j]<<"   ";
        }
        cout << "\n";
    }
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];
   

    FillArrayByRandoomNumber(arr,3,3);

    cout << "The following is a 3*3 random matrix : \n";
    PrintArray(arr,3,3);

    system("pause>0");
    return 0;
}