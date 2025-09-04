#include<iostream>
#include<iomanip>
using namespace std;


//solution1
//void PrintArray(int arr[3][3], short Rows, short cols)
//{
//
//    for (short i = 0;i < Rows;i++)
//    {
//        {
//            for (short j = 0;j < cols;j++)
//                cout << setw(3) << arr[i][j] << "   ";
//        }
//        cout << "\n";
//    }
//}
//
//bool isSparsMatrix(int Matrix1[3][3],  int Rows, int cols)
//{
//    short counterZero = 0;
//    short counterAnyDigit = 0;
//
//    for (short i = 0;i < Rows;i++)
//    {
//        for (short j = 0;j < cols;j++)
//        {
//            if ( Matrix1[i][j]==0)
//            {
//                counterZero++;
//            }
//            if ( Matrix1[i][j]!=0)
//            {
//                counterAnyDigit++;
//            }
//
//        }
//    }
//    return counterZero>counterAnyDigit;
//}
//
//int main()
//{
//
//    int Matrix1[3][3] = { {9,1,2},{3,9,0},{0,0,9 } };
//
//    PrintArray(Matrix1, 3, 3);
//   
//
//
//    if (isSparsMatrix(Matrix1, 3, 3))
//    {
//        cout << "\nYes,is Spars Matrix" << endl;
//
//   }
//    else
//    {
//        cout << "\nNo,is  Not Spars Matrix" << endl;
//    }
//
//    system("pause>0");
//    return 0;
//}


//solution2
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

int CountDigitFrequnce(int Matrix1[3][3], short DigitToCheck, int Rows, int cols)
{
    short counter = 0;

    for (short i = 0;i < Rows;i++)
    {
        for (short j = 0;j < cols;j++)
        {
            if (DigitToCheck == Matrix1[i][j])
            {
                counter++;
            }
        }
    }
    return counter;
}
bool isSparsMatrix(int Matrix1[3][3], int Rows, int cols)
{
    short MatrixZise =Rows*cols;

    return(CountDigitFrequnce(Matrix1, 0, 3, 3) > (MatrixZise / 2));
    
}

int main()
{

    int Matrix1[3][3] = { {9,0,0},{0,9,0},{0,0,9 } };

    PrintArray(Matrix1, 3, 3);



    if (isSparsMatrix(Matrix1, 3, 3))
    {
        cout << "\nYes,is Spars Matrix" << endl;

    }
    else
    {
        cout << "\nNo,is  Not Spars Matrix" << endl;
    }

    system("pause>0");
    return 0;
}