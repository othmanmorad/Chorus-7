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

int RowSum(int arr[3][3], short RowNumbers, short cols)
{
    int sum = 0;

    {
        for (short j = 0;j < cols;j++)
            sum += arr[RowNumbers][j];

    }
    return sum;

}

void SumMatrixRowsInArray(int arr[3][3], int arrSum[3], short Rows, short cols)
{
    
    for (short i = 0;i < Rows;i++)
    {
        arrSum[i] = RowSum(arr, i, cols);
    }
}

void PrintRowSumArray( int arrSum[3], short Rows)
{
    cout << "\nThe foolwing are the sum of each row in the matrix:\n";
    for (short i = 0;i < Rows;i++)
    {
       
        cout << "Row " << i + 1 << " Sum = " << arrSum[i] << endl;;
    }
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];
    int arrSum[3];

    FillArrayByRandoomNumber(arr, 3, 3);

    cout << "The following is a 3*3 random matrix : \n";
    PrintArray(arr, 3, 3);

    SumMatrixRowsInArray(arr, arrSum, 3, 3);

    PrintRowSumArray(arrSum,3);

    system("pause>0");
    return 0;
}