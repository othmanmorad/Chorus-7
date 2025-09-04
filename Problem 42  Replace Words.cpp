#include <iostream>
#include <string>
using namespace std;

string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string ReplaceTo)
{
	short pos = S1.find(StringToReplace);

	while (pos != std::string::npos)
	{
		S1.replace(pos, StringToReplace.length(), ReplaceTo);
		
		pos = S1.find(StringToReplace);
	}

	return S1;

}
int main()
{
	string S1 = "Welcom to Palestine , Palestine is a nice country";
	string StringToReplace = "Palestine";
	string ReplaceTo = "USA";

	cout << "\nOriginal string\n"<<S1<<endl;
	cout << "\n\nString After Replace:  ";
	cout << "\n"<<ReplaceWordInStringUsingBuiltInFunction(S1, StringToReplace, ReplaceTo);

	system("pause>0");
}

