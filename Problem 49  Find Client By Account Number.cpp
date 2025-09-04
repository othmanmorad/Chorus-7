#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

//  problem47(To open file)
//  const string ClientFileName = "Client.txt";
//  struct sClients
//  {
//  	string AccountNumber;
//  	string PinCode;
//  	string Name;
//  	string Phone;
//  	int AccountBalance;
//  
//  };
//  
//  sClients ReadNewClient()
//  {
//  	sClients Client;
//  
//  	cout << "\nEnter Client's information \n";
//  
//  	cout << "Account Number " << endl;
//  	getline(cin >> ws, Client.AccountNumber);
//  
//  	cout << "Enter  PinCode " << endl;
//  	getline(cin, Client.PinCode);
//  
//  	cout << "Enter  Name " << endl;
//  	getline(cin, Client.Name);
//  
//  	cout << "Enter  phone " << endl;
//  	getline(cin, Client.Phone);
//  
//  	cout << "Enter countBalance " << endl;
//  	cin >> Client.AccountBalance;
//  
//  	return Client;
//  }
//  
//  string ConvertRecordToLine(sClients Client, string Sprator = " #//# ")
//  {
//  	string sLine;
//  	sLine += Client.AccountNumber + Sprator;
//  
//  	sLine += Client.PinCode + Sprator;
//  
//  	sLine += Client.Name + Sprator;
//  
//  	sLine += Client.Phone + Sprator;
//  
//  	sLine += to_string(Client.AccountBalance) + Sprator;
//  
//  	return sLine;
//  }
//  
//  void AddDataLineToFile(string FileName, string DataLine)
//  {
//  	fstream MyFile;
//  
//    MyFile.open(FileName, ios::out | ios::app);
//  
//  	if (MyFile.is_open())
//  	{
//  
//  		MyFile << DataLine << endl;
//  		MyFile.close();
//  	}
//  
//  }
//  
//  void AddNewClient()
//  {
//  
//  	sClients Client;
//  	Client = ReadNewClient();
//  
//  	AddDataLineToFile(ClientFileName, ConvertRecordToLine(Client));
//  
//  }
//  
//  void AddAllClients()
//  {
//  	char AddMore = 'y';
//  
//  	do
//  	{
//  		system("cls");
//  		cout << "Adding new client : \n\n";
//  		AddNewClient();
//  
//  		cout << "\nClients added succssfuly , do you want add more clients ? ";
//  		cin >> AddMore;
//  	} while (AddMore == 'y' || AddMore == 'Y');
//  }
//  
//  
//  
//  int main()
//  {
//  
//  	AddAllClients();
//  
//  }





//problem49
 //  const string ClientFileNmae = "Client.txt";
 //  struct sClients
 //  {
 //      string AccountNumber = "";
 //      string PinCode = "";
 //      string Name = "";
 //      string Phone = "";
 //      int AccountBalance;
 // 
 //  };
 //  vector<string> SpiltString(string S1, string delim = " #//# ")
 //  {
 //      vector<string>vString;
 // 
 //      int pos = 0;
 //      string sWord;
 // 
 //      while ((pos = S1.find(delim)) != std::string::npos)
 //      {
 //          sWord = S1.substr(0, pos);
 // 
 //          if (sWord != "")
 //          {
 //              vString.push_back(sWord);
 // 
 //          }
 // 
 //          S1.erase(0, pos + delim.length());
 //      }
 //      if (S1 != "")
 //      {
 //          vString.push_back(S1);
 //      }
 // 
 //      return vString;
 //  }
 // 
 //  sClients ConvertLineToRecord(string Line, string Spraetor = " #//# ")
 //  {
 //      vector<string>vClient;
 //      sClients Client;
 // 
 //      vClient = SpiltString(Line, Spraetor);
 //      Client.AccountNumber = vClient[0];
 //      Client.PinCode = vClient[1];
 //      Client.Name = vClient[2];
 //      Client.Phone = vClient[3];
 //      Client.AccountBalance = stod(vClient[4]);
 // 
 //      return Client;
 //  }
 // 
 // 
 // 
 //  vector<sClients>LoadClientDataFromFile(string FileName)
 //  {
 // 
 //      vector<sClients>vClient;
 //      fstream MyFile;
 // 
 //      MyFile.open(FileName, ios::in);
 //      if (MyFile.is_open())
 //      {
 //          string Line;
 //          sClients Client;
 // 
 //          while (getline(MyFile, Line))
 //          {
 //              Client = ConvertLineToRecord(Line);
 //              vClient.push_back(Client);
 //          }
 // 
 //          MyFile.close();
 //      }
 // 
 //      return vClient;
 // 
 // 
 //  }
 //  void PrintClientRecord(sClients Client)
 //  {
 // 
 //      cout << "Account Number " << Client.AccountNumber << endl;
 // 
 //      cout << "PinCode " << Client.PinCode << endl;
 // 
 //      cout << "Name " << Client.Name << endl;
 // 
 //      cout << "phone " << Client.Phone << endl;
 // 
 //      cout << "AccountBalance " << Client.AccountBalance << endl;
 // 
 //  }
 // 
 //  string ReadAccountNumber()
 //  {
 //      string AccountNumber;
 //      cout << "\nEnter Account Number : " << endl;
 //      cin >> AccountNumber;
 //      return AccountNumber;
 //  }
 // 
 //  bool FindClientByAccountNumber(string AccountNumber, sClients &Client)
 //  {
 //      vector<sClients>vClient = LoadClientDataFromFile(ClientFileNmae);
 // 
 //      for (sClients C : vClient)
 //      {
 //          if (C.AccountNumber == AccountNumber)
 //          {
 //              Client = C;
 //              return true;
 //          }
 //      }
 //      return false;
 //  }
 // 
 //  int main()
 //  {
 //      string AccountNumber = ReadAccountNumber();
 //      sClients Client;
 // 
 //      if (FindClientByAccountNumber(AccountNumber, Client))
 //      {
 //          PrintClientRecord(Client);
 //      }
 //      else
 //      {
 //          cout << "\nClient with Account number (" << AccountNumber << ") Not found";
 //      }
 //  }
