#include<iostream>
#include<iomanip>
using namespace std;
int ReadNumber()
{
    int Number;
    cout << "Enter the number to look for in matrix \n";
    cin >> Number;
    return Number;
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






bool IsNumberInMatrix(int Matrix1[3][3], short DigitToCheck, int Rows, int cols)
{
    short counter = 0;

    for (short i = 0;i < Rows;i++)
    {
        for (short j = 0;j < cols;j++)
        {
            if ( Matrix1[i][j]==DigitToCheck)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix1[3][3] = { {9,0,0},{0,9,0},{0,0,9 } };

    PrintArray(Matrix1, 3, 3);
    int DigitToCheck = ReadNumber();


    if (IsNumberInMatrix(Matrix1, DigitToCheck, 3, 3))
    {
        cout << "Yes,Number is found";
   }
    else
    {
        cout << "No,Number is Not found";
    }

    system("pause>0");
    return 0;
}