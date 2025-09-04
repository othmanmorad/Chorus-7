#include<iostream>
#include<string>
using namespace std;
//problem 24

string ReadString()
{
    string text;
    cout << "Please enter text you want\n";
    getline(cin, text);
    return text;
}


string UpperAllLetterOfEachWord(string S1)
{
    for (short i = 0; i < S1.length();i++)
    {

        S1[i] = toupper(S1[i]);

    }
    return S1;
}


string LowerAllLetterOfEachWord(string S1)
{
    for (short i = 0; i < S1.length();i++)
    {
        
       S1[i] = tolower(S1[i]);
    }
    return S1;
}


int main()
{
    string S1 = ReadString();


    cout << "\nString after Upper :\n";

    S1 = UpperAllLetterOfEachWord(S1);

    cout << S1 << endl;



    cout << "\nString after Lower :\n";

    S1 = LowerAllLetterOfEachWord(S1);

    cout << S1 << endl;

    system("pause>0");
}

