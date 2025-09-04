#include<iostream>
#include<string>
using namespace std;

string ReadText()
{
    string Text;
    cout << "Please enter Your string \n";
    getline(cin, Text);
    return Text;
}

char ReadCharecter()
{
    char Cherceter;
    cout << "Please enter one charecter to check \n";
    cin >> Cherceter;
    return Cherceter;
}
char InvertLetterCase(char C1)
{
    return (isupper(C1)) ? tolower(C1) : toupper(C1);
}
int CountLetters(char CharecterToCheck, string S1 , bool MatchCase=true)
{
    short counter = 0;
    for (short i = 0;i <= S1.length();i++)
    {
        if (MatchCase)
        {
            if(S1[i] == CharecterToCheck)
            counter++;
        }

        else if (tolower(S1[i])== tolower(CharecterToCheck))
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    string S1 = ReadText();
    char C1 = ReadCharecter();

    cout << "\nLetter \ ' " << C1 << "\' count = " << CountLetters(C1, S1)<<endl;

     cout << "Letter \' " << C1 << "\'";
    cout << "Or \' " << InvertLetterCase( C1) << "\'";
    cout << CountLetters(C1, S1,false);

    system("pause>0");
}





