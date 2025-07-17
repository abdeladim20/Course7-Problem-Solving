#include <iostream>
#include <vector>
using namespace std;

string ReadString()
{
    string S1;
    cout << "\nPlease enter your string? " << endl;
    getline(cin, S1);
    return S1;
}

vector<string> Splite(string S1, string Separator)
{
    vector<string> result;
    short pos = 0;
    string sWord;
    // use find() function to get the position of the delimiters
    while ((pos = S1.find(Separator)) != string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            result.push_back(sWord);
        }
        S1.erase(0, pos + Separator.length()); /* erase() until
        position and move to next word. */
    }
    if (S1 != "")
    {
        result.push_back(S1);
    }

    return result;
}

void Printer(vector<string> &Result)
{
    for (string &word : Result)
    {
        cout << word << endl;
    }
}

int main()
{
    string S1 = ReadString();
    vector<string> Result = Splite(S1, " ");
    cout << "\nTokens = " << Result.size() << endl;
    Printer(Result);

    return 0;
}