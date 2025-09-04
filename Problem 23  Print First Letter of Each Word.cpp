#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
    string text;
    cout << "Please enter text you want\n";
    getline(cin, text);
    return text;
}
void PrintFirstLetterOfEachWord(string text)
{ 
    bool isFirstLetter = true;

    cout << "\nFirst letter in each word\n";
    for (short i = 0; i < text.length();i++)
    {
        if (text[i] != ' '&& isFirstLetter)
        {
            cout << text[i] << endl;
        }
        isFirstLetter=(text[i] == ' ') ? true : false;
    }
   
}
int main()
{
   
    PrintFirstLetterOfEachWord(ReadString());


}
