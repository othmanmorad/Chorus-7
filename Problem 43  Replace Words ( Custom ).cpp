#include <iostream>
#include <string>
#include <vector>
using namespace std;



vector <string> SpiltString(string S1, string delim)
{
    vector <string>vString;


    
    short  pos = 0;
    string sWord;


    while ((pos = S1.find(delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            vString.push_back(sWord);
        }

        S1.erase(0, pos + delim.length());
    }

    if (S1 != "")
    {
        vString.push_back(S1);
    }
    return vString;
}

string JoinString(vector <string>vString, string delim)
{
    string S1 = "";
    for (string& s : vString)
    {
        S1 = S1 + s + delim;

    }

    return S1.substr(0, S1.length() - delim.length());
}

string LowerAllString(string S1)
{

    for (int i = 0;i <= S1.length()-1;i++)
    {
        S1 = tolower(S1[i]);
    }
    return S1;
}

string ReplaceWordInstring(string S1, string StringToReplace, string ReplaceTo, bool MatchCase = true)
{
    vector <string>vString= SpiltString( S1, " ");

    for (string& s : vString)
    {
        if (MatchCase)
        {
            if (s == StringToReplace)
            {
                s = ReplaceTo;
            }
        }

        else
        {
            if (LowerAllString(s) == LowerAllString(StringToReplace))
            {
                s = ReplaceTo;
            }
        }
    }
    return JoinString(vString, " ");
}

int main()
{
    vector <string>vString;

    string S1 = "Welcome to Plasetine , Palestine is a nice country";
    string StringToReplace = "palestinr";
    string ReplaceTo = "USA";

    cout << "\nOriginal string \n\n"<<S1<<endl;
    cout << "\n\nString after replace with match case\n";
    cout << "\n" << ReplaceWordInstring(S1, StringToReplace, ReplaceTo);

    cout << "\n\nString after replace without match case\n";
    cout << "\n" << ReplaceWordInstring(S1, StringToReplace, ReplaceTo, false);

        system("pause>0");
}

