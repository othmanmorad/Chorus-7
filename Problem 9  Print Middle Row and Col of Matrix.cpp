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
                arr[i][j] = RandoomNumber(1, 10);
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
                printf("%0*d  ",2,arr[i][j]) ;
        }
        cout << "\n";
    }
}

void PrintMiddleRowOfMatrix(int arr[3][3], short Rows, short cols)
{
    short MiddleRow = Rows / 2;
       
    for (short j = 0;j < cols;j++)
    {

        printf("%0*d  ", 2, arr[MiddleRow][j]);
    }
    
}
void PrintMiddleColOfMatrix(int arr[3][3], short Rows, short cols)
{
    short MiddlCol = cols / 2;

    for (short i = 0;i < Rows;i++)
    {
        
         printf("%0*d  ", 2, arr[i][MiddlCol]);
            

    }
}


int main()
{
    srand((unsigned)time(NULL));


    int arr[3][3];

    FillArrayByRandoomNumber(arr, 3, 3);

    cout << "Arry random elements\n";
    PrintArray(arr, 3, 3);

    cout << "\nMiddl row of Matrix is :" << endl;
    PrintMiddleRowOfMatrix(arr, 3, 3);


    cout << "\nMidll col  of Matrix is :" << endl;
    PrintMiddleColOfMatrix(arr, 3, 3);



}