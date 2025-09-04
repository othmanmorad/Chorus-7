#include<iostream>
#include<iomanip>
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






bool IsNumberInMatrix(int Matrix1[3][3], short Number, int Rows, int cols)
{
    short counter = 0;

    for (short i = 0;i < Rows;i++)
    {
        for (short j = 0;j < cols;j++)
        {
            if (Matrix1[i][j] == Number)
            {
                return true;
            }
        }
    }
    return false;
}

void PrintIntrsectedNumbers(int Matrix1[3][3], int Matrix2[3][3], int Rows, int cols)
{
    int Number;
    for (short i = 0;i < Rows;i++)
    {
        for (short j = 0;j < cols;j++)
        {    
            Number = Matrix2[i][j];
            if (IsNumberInMatrix(Matrix1, Number, 3, 3))
            {
                cout <<setw(3)<<Number<< " ";
            }
        }
    }

}
int main()
{
    srand((unsigned)time(NULL));

    int Matrix1[3][3] = { {9,2,0},{0,9,0},{0,0,9 } };
    int Matrix2[3][3] = { {1,2,3},{0,9,0},{0,0,9 } };

    PrintArray(Matrix1, 3, 3);
    cout << "\n\n" << endl;
    PrintArray(Matrix2, 3, 3);

    
        cout << "\nIntresected number in tow matrices :\n";
        PrintIntrsectedNumbers(Matrix1,Matrix2 , 3, 3);
    system("pause>0");
    return 0;
}
