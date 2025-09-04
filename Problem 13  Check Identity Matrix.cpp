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


bool AreIdentityMatrix(int Matrix1[3][3], int Rows, int cols)
{
    for (short i = 0;i < Rows;i++)
    {
        {
            for (short j = 0;j < cols;j++)
                if ( i==j && Matrix1[i][j] !=1)
                {
                    return false;
                }
                else if (i != j && Matrix1[i][j] != 0)
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

    int Matrix1[3][3] = { {1,0,0},{0,1,0},{0,0,1 } };
   

   
   
    PrintArray(Matrix1, 3, 3);

   
    if (AreIdentityMatrix(Matrix1,  3, 3))
    {
        cout << "\nYes :  matrix are identity.";
    }
    else
    {
        cout << "\nNo : matrix are not identity.";
    }

    system("pause>0");
    return 0;
}