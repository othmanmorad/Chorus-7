#include<iostream>
#include<iomanip>
#include<string>
using namespace std;


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


bool IsPalindromMatrix(int Matrix[3][3], short Rows, short cols)
{
    for (short i = 0;i < Rows;i++)
    {
        {
            for (short j = 0;j < cols;j++)
                if (Matrix[i][j] != Matrix[i][cols - 1 - j])
                {

                    return false;
               }
        }
       
    }
    return true;
}



int main()
{
    srand((unsigned)time(NULL));

    int Matrix[3][3] = { {1,0,1},{5,5,5},{7,5,7} };


    PrintArray(Matrix, 3, 3);
    cout << "\n\n" << endl;


    if (IsPalindromMatrix(Matrix, 3, 3))
    {

        cout << "\nYes is palindrom matrix";

    }
    else
    {

        cout << "\nNo is not palindrom matrix";
    }

    system("pause>0");
    return 0;
}
