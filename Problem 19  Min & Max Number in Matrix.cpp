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






 int FindMaxNumberInMatrix(int Matrix1[3][3], int Rows, int cols)
{
     short Max=Matrix1[0][0];

    for (short i = 0;i < Rows;i++)
    {
        for (short j = 0;j < cols;j++)
        {
           
            if ( Matrix1[i][j]>Max)
            {
                Max = Matrix1[i][j];
            }
        }
    }
    return Max;
}

int FindMinNumberInMatrix(int Matrix1[3][3],  int Rows, int cols)
{
   
    short Min=Matrix1[0][0];

    for (short i = 0;i < Rows;i++)
    {
        for (short j = 0;j < cols;j++)
        {
          
            if ( Matrix1[i][j]<Min)
            {
                Min = Matrix1[i][j];
            }
        }
    }
    return Min;

}


int main()
{
    srand((unsigned)time(NULL));

    int Matrix1[3][3] = { {11,2,0},{0,9,12},{0,0,9 } };
    

    PrintArray(Matrix1, 3, 3);
    cout << "\n\n" << endl;
   


    cout << "\n:Max number in matrix\n";
   cout<< FindMaxNumberInMatrix(Matrix1, 3, 3);

    cout << "\n:Minimum number in matrix\n";
   cout<< FindMinNumberInMatrix(Matrix1, 3, 3);


    system("pause>0");
    return 0;
}
