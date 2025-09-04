#include<iostream>
#include<string>

using namespace std;

string ReadString()
{
    string S1;
    cout << "Please enter your string " << endl;
    getline(cin, S1);
    return S1;
}
bool IsVowel(char Ch)
{

    Ch = tolower(Ch);

    return ((Ch == 'a') || (Ch == 'e') || (Ch == 'u') || (Ch == 'i') || (Ch == 'o'));
}

void PrintVowels(string S1)
{

    cout << "\nVowels in string are\n";
    for (short i = 0; i <= S1.length();i++)
        if (IsVowel(S1[i]))
        {
            cout << S1[i]<<"   ";
        }

   
}

int main()
{
    string S1 = ReadString();


     PrintVowels(S1);

     system("pause>0");
}




//method2
//string ReadString()
//{
//    string S1;
//    cout << "Please enter your string" << endl;
//    getline(cin, S1);
//    return S1;
//}
//
//bool IsVowel(char Ch)
//{
//
//    char vowel[5] = { 'a','e','u','i','o' };
//    for (char letter : vowel)
//
//    {
//        if (Ch == letter || Ch == toupper(letter))
//        {
//
//            return true;
//        }
//    }
//    return false;
//}
//void PrintVowels(string S1)
//{
//
//    cout << "\nVowels in string are\n";
//    for (short i = 0; i <= S1.length();i++)
//        if (IsVowel(S1[i]))
//        {
//            cout << S1[i] << "   ";
//        }
//
//    
//}
// 
//
//int main()
//{
//    string S1 = ReadString();
//
//    PrintVowels(S1);
//
//    system("pause>0");
//
//}

