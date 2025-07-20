#include <iostream>
#include <vector>
using namespace std;

string JoinString(vector<string> vstring, string separator)
{
    string result = "";
    for (string &word : vstring)
    {
        result += word + separator;
    }
    return result.substr(0, result.length() - separator.length());
}

string JoinString(string arr[], int length, string separator)
{
    string result = "";
    for (int i = 0; i < length; i++)
    {
        result += arr[i] + separator;
    }
    return result.substr(0, result.length() - separator.length());
}

int main()
{
    string arr[] = {"abdeladim", "jabbouri", "and", "aaa"};
    vector<string> vstring = {"abdeladim", "jabbouri", "and", "aaa"};
    cout << "\nVector after join: \n";
    cout << JoinString(vstring, ", ") << endl;
    cout << "\nArray after join: \n";
    cout << JoinString(arr,4 , ", ") << endl;
    return 0;
}