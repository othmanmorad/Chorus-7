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
string UpperFirstLetterOfEachWord(string S1)
{
    bool isFirstLetter = true;


    for (short i = 0; i < S1.length();i++)
    {
        if (S1[i] != ' ' && isFirstLetter)
        {
            S1[i] = toupper(S1[i]);


        }
        isFirstLetter = (S1[i] == ' ') ? true : false;
    }
    return S1;
}
int main()
{
    string S1 = ReadString();

    cout << "\nString after conversion :\n";

    S1 = UpperFirstLetterOfEachWord(S1);

    cout << S1 << endl;

    system("pause>0");
}


