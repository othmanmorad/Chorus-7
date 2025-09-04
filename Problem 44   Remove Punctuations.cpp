#include <iostream>
#include <string>
using namespace std;

string RemovePanctuationFromString(string S1)
{
    string S2 = "";
    for (short i = 0;i <= S1.length();i++)
    {
        if (!ispunct(S1[i]))
        {
            S2 = S2 + S1[i];
        }
    }
    return S2;
} 

int main()
{
    string S1 = "othamn : morad , othman \" haj $ mohammed";
    cout << "\nOriginal string= \n" << S1 << endl;

    cout << RemovePanctuationFromString(S1);

}

