#include <iostream>
#include <vector>
using namespace std;

string JoinString(vector<string> &vstring, string separator)
{
    string result = "";
    // first solution:
    /*for (short i = 0; i < vstring.size(); i++)
    {
        result += vstring[i];
        if (i != vstring.size() - 1)
        {
            result += separator;
        }
    }
    return result; */

    // second solution:
    for (string &word : vstring)
    {
        result += word + separator;
    }
    return result.substr(0, result.length() - separator.length());
}

int main()
{
    vector<string> vstring = {"abdeladim", "jabbouri", "and", "aaa"};
    cout << "\nVector after join: \n";
    cout << JoinString(vstring, ", ") << endl;
    return 0;
}