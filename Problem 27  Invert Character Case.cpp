#include <iostream>
#include<string>
using namespace std;

char ReadChar()
{
    char Charecter;
    cout << "Please enter a charecter you want\n";
    cin>>Charecter;
    return Charecter;
}

char InvertLetterCase(char Charecter)
{
    return (isupper(Charecter)) ? tolower(Charecter) : toupper(Charecter);
}

int main()
{
    char C1 = ReadChar();

   

  cout << "\nChar after inverting case (Using Tranry opreator):\n";
  C1= InvertLetterCase(C1);
  cout << C1;


  system("pause>0");
}



//char ReadChar()
//{
//    char Charecter;
//    cout << "Please enter a charecter you want\n";
//    cin >> Charecter;
//    return Charecter;
//}
//
//char InvertLetterCaseUsingIfStatment(char Charecter)
//{
//    if (isupper(Charecter))
//        Charecter = tolower(Charecter);
//
//    else
//        Charecter = toupper(Charecter);
//
//    return Charecter;
//}
//
//
//
//int main()
//{
//    char C1 = ReadChar();
//
//    cout << "\nChar after inverting case (Using if statment):\n";
//    C1= InvertLetterCaseUsingIfStatment(C1);
//    cout << C1;
//
//
//    system("pause>0");
//}
