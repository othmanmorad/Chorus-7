#include <iostream>
#include <string>
using namespace std;


struct sClient
{ 
    string AcountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;

};
sClient ReadClient()
{
    sClient Clinet;
    cout << "Enter Account number ? ";
    getline(cin, Clinet.AcountNumber);

    cout << "Enter PinCode ? ";
    getline(cin, Clinet.PinCode);


    cout << "Enter Name ? ";
    getline(cin, Clinet.Name);


    cout << "Enter Phone ? ";
    getline(cin, Clinet.Phone);


    cout << "Enter AccountBalanced ? ";
    cin >> Clinet.AccountBalance;

    return Clinet;

}
string CoverRecordToLine(sClient Clinet , string Seperator)
{
    string stClinetRecord;

    stClinetRecord += Clinet.AcountNumber + Seperator;
    stClinetRecord += Clinet.PinCode + Seperator;
    stClinetRecord += Clinet.Name + Seperator;
    stClinetRecord += Clinet.Phone + Seperator;
    stClinetRecord += to_string(Clinet.AccountBalance) + Seperator;

    return stClinetRecord.substr(0,stClinetRecord.length()-Seperator.length());
}

int main()
{

    cout << "\nPlease enter client Data:\n\n";
    sClient Clinet;

    Clinet = ReadClient();

    cout << "\n\nClinet record for saving is:\n";
    cout<<CoverRecordToLine(Clinet, " #//# ");
    
    system("pause>0");
}

