#include<iostream>
#include<string>
using namespace std;

string ReadString()
{
    string S1;
    cout << "Please your string "<<endl;
    getline(cin , S1);
    return S1;
}
bool IsVowel(char Ch)
{

    Ch = tolower(Ch);

    return ((Ch == 'a') || (Ch == 'e') || (Ch == 'u') || (Ch == 'i') || (Ch == 'o'));
}

short CountVowel(string S1)
{

    short counter = 0;
    for(short i=0; i<=S1.length() ;i++)
    if (IsVowel(S1[i]))
    {
        counter++;
    }

    return counter;
}

int main()
{
    string S1 = ReadString();
   

     cout << "\nNumber of vowel is " << CountVowel(S1);

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
//short CountVowel(string S1)
//{
//
//    short counter = 0;
//    for (short i = 0; i <= S1.length();i++)
//        if (IsVowel(S1[i]))
//        {
//            counter++;
//        }
//
//    return counter;
//}
// 
//
//int main()
//{
//    string S1 = ReadString();
//
//    cout << "\nNumber of vowel is " << CountVowel(S1);
//
//}


