#include <iostream>

using namespace std;

string ReadString()
{
    string S1;
    cout << "Please Enter Your String?\n";
    getline(cin, S1);
    return S1;
}

char InvertedLetterCase(char char1)
{
    return isupper(char1) ? tolower(char1) : toupper(char1);
}

string InvertedLetterCase(string S1)
{
    for (int i = 0; i < S1.length(); i++)
    {
        S1[i] = InvertedLetterCase(S1[i]);
    }
    return S1;
}

int main()
{
    string S1 = ReadString();
    cout << "\nString after Inverting all letters case:\n";
    S1 = InvertedLetterCase(S1);
    cout << S1 << endl;
    return 0;
}