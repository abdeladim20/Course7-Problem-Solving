#include <iostream>
using namespace std;

string ReadString()
{
    string S1;
    cout << "Please Enter Your String?\n";
    getline(cin, S1);
    return S1;
}

short CountWords(string S1)
{
    string delim = " ";
    short counter = 0;
    short pos = 0;
    string sWord;
    // use find() function to get the position of the delimiters
    while ((pos = S1.find(delim)) != string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            counter++;
        }
        S1.erase(0, pos + delim.length()); /* erase() until
        position and move to next word. */
    }
    if (S1 != "")
    {
        counter++;
    }
    return counter;
}

int main()
{
    string S1 = ReadString();
    cout << "\nThe Number of words in your string is: " << CountWords(S1) << endl;
    return 0;
}