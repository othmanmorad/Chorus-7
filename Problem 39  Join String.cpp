#include<iostream>
#include<string>
#include<vector>
using namespace std;

string JoinSpilt(vector <string>vString, string delim)
{
    string S1 = "";
    for (string &s : vString)
    {
        S1 = S1+s + delim;

    }
    
    return S1.substr(0,S1.length()-delim.length());
}

int main()
{
    vector <string>vString = { "Firas","Mohammed","Raed","Hasan","Saleh" };


    cout << "\nVector after join :\n";
    cout<<JoinSpilt(vString, " ### ");

  
    system("pause>0");

}