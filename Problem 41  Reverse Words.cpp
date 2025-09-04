#include<iostream>
#include<string>
#include<vector>
using namespace std;

string ReadString()
{
    string S1;
    cout << "Please enter your string " << endl;
    getline(cin, S1);
    return S1;
}

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

string RevreseWordsInString(string S1)
{
    string S2 = "";
    vector <string>vString;

    vString=SpiltString(S1," ");

    vector <string>::iterator iter = vString.end();

    while (iter != vString.begin())
    {
        --iter;
        S2 += *iter + " ";
    }
    S2.substr(0, S2.length() - 1);
    return S2;
}

int main()
{
    string S1=ReadString();
    cout << "\n\nString after reversing word:";
    cout << "\n"<<RevreseWordsInString(S1);
    
    system("pause>0");

}
