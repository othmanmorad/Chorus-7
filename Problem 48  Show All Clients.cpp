#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

const string ClientFileName = "Client.txt";
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

sClient ConvertLineToRecord(string Line, string Seperator=" #//# ")
{
    sClient Client;

    vector <string>vClientData;

    vClientData = SpiltString(Line, Seperator);

    Client.AcountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);

    return Client;
}

vector <sClient> LoadClientDataFromFile(string FileName)
{
    fstream MyFile;

    vector<sClient>vClients;

    MyFile.open(FileName, ios::in);

        if (MyFile.is_open())
        {

            string Line;
            sClient Client;
            while (getline(MyFile, Line))
            {
                Client = ConvertLineToRecord(Line);

                vClients.push_back(Client);

            }
        }

        return vClients;
}

void PrintClientData(sClient Client)
{
    cout << "|  " << setw(15) << left << Client.AcountNumber ;
    cout << "|  " << setw(10) << left << Client.PinCode;
    cout << "|  " << setw(40) << left << Client.Name;
    cout << "|  " << setw(12) << left << Client.Phone;
    cout << "|  " << setw(12) << left << Client.AccountBalance;

}
void PrintAllClinetsData(vector<sClient>vClients)
{
    cout << "\n\t\t\t\t\tClient( " << vClients.size() << ") Client(s)" << endl;
    cout <<
        "\n----------------------------------------------------------------------";
    cout << "----------------------------------------------------------------------\n" << endl;
    cout << "|  " << left << setw(15) << "AcountNumber";
    cout << "|  " << left << setw(10) << "PinCode";
    cout << "|  " << left << setw(40) << "Name";
    cout << "|  " << left << setw(12) << "Phone";
    cout << "|  " << left << setw(12) << "AccountBalance";
    cout <<
        "\n----------------------------------------------------------------------";
    cout << "----------------------------------------------------------------------\n"<<endl;
    for (sClient Client : vClients)
    {
        PrintClientData(Client);
        cout << endl;
    }
    cout <<
        "\n----------------------------------------------------------------------";
    cout << "----------------------------------------------------------------------\n"<<endl;
}

int main()
{
    vector<sClient>vClients=
    LoadClientDataFromFile(ClientFileName);
    PrintAllClinetsData(vClients);

    system("pause>0");
    return 0;
}
