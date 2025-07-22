#include <iostream>

using namespace std;

string RemovePunc(string S1)
{
    string res = "";
    for (short i = 0; i < S1.length(); i++)
    {
        if (!ispunct(S1[i]))
        {
            res += S1[i];
        }
    }
    return res;
}

int main()
{
    string S1 = "Welcome: to Jordan, it's a nice country. it's amazing;";
    cout << "\nOriginal string: \n";
    cout << S1 << endl;
    cout << "\nPaunctuation Removed: " << endl;
    cout << RemovePunc(S1) << endl;
    return 0;
}