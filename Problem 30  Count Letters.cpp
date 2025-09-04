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
    cin>>Cherceter;
    return Cherceter;
}

int CountCapitalLetters(char CharecterToCheck , string S1)
{
    short counter = 0;
    for (short i = 0;i <= S1.length();i++)
    {
        if (S1[i]==CharecterToCheck)
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

    cout << "\nLetter \ ' "<<C1<<"\' count = " << CountCapitalLetters(C1, S1);

    system("pause>0");
}



