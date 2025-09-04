#include <iostream>
#include <string>
using namespace std;

//fedeo21
//void PrintFibonaccciUsingLoop(short Number)
//{
//
//    int FebNumber = 0;
//
//    int  prev2 = 0, prev1 = 1;
//    cout << "1   ";
//
//    for(short i =2 ;i<=Number ;i++)
//    {
//
//
//        FebNumber = prev2 + prev1;
//        cout << FebNumber << "   ";
//
//        prev2 = prev1;
//        prev1 = FebNumber;
//
//        
//    }
//}
//int main()
//{
//    PrintFibonaccciUsingLoop(10);
//
//    system("pause>0");
//}


//fedeo22
void PrintFibonaccciUsingRecurssion(short Number, int prev1 , int prev2 )
{
    
    int FebNumber = 0;

   

    if (Number > 0)
    {


        FebNumber = prev2 + prev1;
        cout << FebNumber << "   ";

        prev2 = prev1;
        prev1 = FebNumber;

        PrintFibonaccciUsingRecurssion(Number - 1, prev1, prev2);
    }
}
int main()
{
    PrintFibonaccciUsingRecurssion(10,0,1);
    
    system("pause>0");
}

