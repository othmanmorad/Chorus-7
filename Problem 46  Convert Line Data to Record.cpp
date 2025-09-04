#include <iostream>
#include <string>
#include <vector>

using namespace std;


struct sClient
{
    string AcountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;

};


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

sClient ConvertLineToRecord(string Line, string Seperator)
{
    sClient Client;

    vector <string>vClientData;

    vClientData = SpiltString(Line,Seperator);

    Client.AcountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance =stod( vClientData[4]);

    return Client;
}



void PrintClinetRecord(sClient Client)
{

    cout << "\n\nThe Follwoing is the extracted client record :\n";
    cout << "\nAccount number ? " <<Client.AcountNumber;

    cout << "\nPinCode ? "<<Client.PinCode;


    cout << "\nName ? "<<Client.Name;


    cout << "\nPhone ? "<<Client.Phone;


    cout << "\nAccountBalanced ? "<<Client.AccountBalance;
}

int main()
{
    string stLine = "1234 #//# 5678 #//# Othman murad #//# 0595611726 #//# 12000";

    cout << "Line Record is :\n" << stLine << endl;

    sClient Client= ConvertLineToRecord(stLine, "#//#");
   
    PrintClinetRecord(Client);

    system("pause>0");
    return 0;
}
