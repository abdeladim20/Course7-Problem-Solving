#include <iostream>
using namespace std;

string ReadString()
{
    string S1;
    cout << "Please Enter Your String?\n";
    getline(cin, S1);
    return S1;
}
void PrintEachWordInString(string S1)
{
    string delim = " ";
    cout << "\nYour string wrords are: \n\n";
    short pos = 0;
    string sWord;
    // use find() function to get the position of the delimiters
    while ((pos = S1.find(delim)) != string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            cout << sWord << endl;
        }
        S1.erase(0, pos + delim.length()); /* erase() until
        position and move to next word. */
    }
    if (S1 != "")
    {
        cout << S1 << endl;
    }
}

int main()
{
    PrintEachWordInString(ReadString());
    return 0;
}