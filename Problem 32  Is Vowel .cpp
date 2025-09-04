#include <iostream>
#include <string>
using namespace std;

//char ReadCharecter()
//{
//    char Cherceter;
//    cout << "Please enter one charecter to check \n";
//    cin >> Cherceter;
//    return Cherceter;
//}
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
//
//int main()
//{
//    char Ch = ReadCharecter();
//
//    if (IsVowel(Ch))
//        cout << "\nYes letter " << Ch << " is  a vowel letter";
//
//    else
//        cout << "\nNo letter "<< Ch <<" is not a vowel letter";
//
//}

char ReadCharecter()
{
    char Cherceter;
    cout << "Please enter one charecter to check \n";
    cin >> Cherceter;
    return Cherceter;
}
bool IsVowel(char Ch)
{

    Ch = tolower(Ch);

    return ((Ch == 'a') || (Ch == 'e') || (Ch == 'u') || (Ch == 'i') || (Ch == 'o'));
}

int main()
{
    char Ch = ReadCharecter();

    if (IsVowel(Ch))
        cout << "\nYes letter " << Ch << " is  a vowel letter";

    else
        cout << "\nNo letter " << Ch << " is not a vowel letter";

}
