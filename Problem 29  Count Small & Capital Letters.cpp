#include<iostream>
#include<string>
using namespace std;


enum enWhatToCount { SmallLetter = 0,CapitalLetter=1 , All=2};

short CountLetters (string S1, enWhatToCount WhatToCount=enWhatToCount::All)
{
    if (WhatToCount == enWhatToCount::All)
    {
        return S1.length();
    }

    short counter = 0;
    for (short i = 0;i <= S1.length();i++) 
    {
        if (WhatToCount == enWhatToCount::CapitalLetter && isupper(S1[i]))
            counter++;
    }
   

    for (short i = 0;i <= S1.length();i++)
    {
        if (WhatToCount == enWhatToCount::SmallLetter && islower(S1[i]))
            counter++;
    }
    return counter;
}



string ReadText()
{
    string Text;
    cout << "Please enter Your string \n";
    getline(cin, Text);
    return Text;
}
int CountCapitalLetters(string S1)
{ 
    short counter = 0;
    for (short i = 0;i <= S1.length();i++)
    {
        if (isupper(S1[i]))
        {
            counter++;
        }
    }
    return counter;
}

int CountSmallLetters(string S1)
{
    return S1.length() - CountCapitalLetters(S1);
}

int main()
{

    string S1 = ReadText();

    cout << "\nString Length : " << S1.length() << endl;
    cout << "\nNumber of Capital leter : " << CountCapitalLetters(S1) << endl;
    cout << "\nNumber of small leter : " << CountSmallLetters(S1) << endl;


    cout << "\nMetohd by enum\n";

    cout << "\nString Length : " << CountLetters(S1) << endl;
    cout << "\nNumber of Capital leter : " << CountLetters(S1,enWhatToCount::CapitalLetter) << endl;
    cout << "\nNumber of small leter : " << CountLetters(S1,enWhatToCount::SmallLetter) << endl;


}
