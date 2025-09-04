#include<iostream>
#include<string>
using namespace std;



string ReadText()
{
    string Text;
    cout << "Please enter a charecter you want\n";
   getline( cin , Text);
    return Text;
}

char InvertLetterCase(char Charecter)
{
   
    return (isupper(Charecter)) ? tolower(Charecter) : toupper(Charecter);
}

string InvertAllLetter(string S1)
{
    for (short i = 0;i <= S1.length();i++)
    {
        S1[i] = InvertLetterCase(S1[i]);
    }
    return S1;
}

int main()
{
    string S1 = ReadText();

    cout << "\nString after inverting case :\n";
    S1= InvertAllLetter(S1);
    cout << S1;


    system("pause>0");
}