#include<iostream>
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


bool AreTypicalMatrix(int Matrix1[3][3], int Matrix2[3][3], int Rows, int cols)
{
    for (short i = 0;i < Rows;i++)
    {
        {
            for (short j = 0;j < cols;j++)
                if (Matrix1[i][j] != Matrix2[i][j])
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

    int Matrix1[3][3];
    int Matrix2[3][3];

    FillArrayByRandoomNumber(Matrix1, 3, 3);
    cout << "The following is a 3*3 random matrix(1) : \n";
    PrintArray(Matrix1, 3, 3);

    FillArrayByRandoomNumber(Matrix2, 3, 3);
    cout << "The following is a 3*3 random matrix(2) : \n";
    PrintArray(Matrix2, 3, 3);

    if (AreTypicalMatrix(Matrix1, Matrix2, 3, 3))
    {
        cout << "\nYes : both matrix are typical.";
    }
    else
    {
        cout << "\nNo : matrices are not typical.";
    }

    system("pause>0");
    return 0;
}