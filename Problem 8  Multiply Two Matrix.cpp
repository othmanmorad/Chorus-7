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
void FillArrayByRandoomNumber(int arr[3][3], short Rows, short cols)
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

void PrintArray(int arr[3][3], short Rows, short cols)
{
    for (short i = 0;i < Rows;i++)
    {
        {
            for (short j = 0;j < cols;j++)
                cout << setw(3) << arr[i][j] << "   ";
        }
        cout << "\n";
    }
}

void MaltiplyMatrix(int arr1[3][3], int arr2[3][3], int arrResult[3][3], int Rows, int cols)
{

    for (short i = 0;i < Rows;i++)
    {
        {
            for (short j = 0;j < cols;j++)
                arrResult[i][j] = arr1[i][j] * arr2[i][j];
        }
      
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[3][3];
    int arr2[3][3];
    int arrResult[3][3];

    FillArrayByRandoomNumber(arr1, 3, 3);
    cout << "The following is a 3*3 random matrix(1) : \n";
    PrintArray(arr1, 3, 3);


    FillArrayByRandoomNumber(arr2, 3, 3);
    cout << "The following is a 3*3 random matrix(2) : \n";
    PrintArray(arr2, 3, 3);


    MaltiplyMatrix(arr1, arr2, arrResult, 3, 3);


    cout << "\nThe result \n";
    PrintArray(arrResult, 3, 3);

    system("pause>0");
    return 0;
}
