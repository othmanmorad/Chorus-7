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
    

    cout << "\nYour string words are: \n\n";
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
        vString.push_back(S1) ;
    }
    return vString;
}


int main()
{
    vector <string>vString;

    vString= SpiltString(ReadString()," ");

    for (string &s : vString)
    {
        cout << s << endl;
    }
    system("pause>0");

}
