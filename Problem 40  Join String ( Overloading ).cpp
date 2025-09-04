#include<iostream>
#include<string>
#include<vector>
using namespace std;

string JoinString(vector <string>vString, string delim)
{
    string S1 = "";
    for (string& s : vString)
    {
        S1 = S1 + s + delim;

    }

    return S1.substr(0, S1.length() - delim.length());
}


string JoinString(string arrString[], short length, string delim)
{
    string S1 = "";
    for (short i=0 ; i<length ; i++)
    {
        S1 = S1 + arrString[i] + delim;

    }
    return S1.substr(0, S1.length() - delim.length());

}

int main()
{
    vector <string>vString = { "Firas","Mohammed","Raed","Hasan","Saleh" };
    string arrString[]= { "Firas","Mohammed","Raed","Hasan","Saleh" };

    cout << "Vector after join :\n\n";
    cout << JoinString(vString, " *** ");

    cout << "\n\n\nArry after join :\n\n";
    cout << JoinString(arrString,5 ," ### ");


    system("pause>0");

}