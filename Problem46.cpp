#include <iostream>
#include <vector>
using namespace std;

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

vector<string> SplitString(string S1, string Delim)
{
    vector<string> vString;
    short pos = 0;
    string sWord;

    while ((pos = S1.find(Delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            vString.push_back(sWord);
        }
        S1.erase(0, pos + Delim.length());
    }
    if (S1 != "")
    {
        vString.push_back(S1);
    }
    return vString;
}

sClient decode(string data)
{
    vector<string> vData = SplitString(data, "#//#");
    sClient ClientData;
    ClientData.AccountNumber = vData[0];
    ClientData.PinCode = vData[1];
    ClientData.Name = vData[2];
    ClientData.Phone = vData[3];
    ClientData.AccountBalance = stod(vData[4]);
    return ClientData;
}

int main()
{
    string data = "A150#//#1234#//#abdeladim jabbouri#//#079999#//#5270.000000";
    cout << "Line Record id: " << endl;
    cout << data << endl;
    cout << "The following is the extract client record: \n" << endl;
    sClient Client;
    Client = decode(data);
    cout << "Acount number: " << Client.AccountNumber << endl;
    cout << "Pin code: " << Client.PinCode << endl;
    cout << "Name: " << Client.Name << endl;
    cout << "Phone: " << Client.Phone << endl;
    cout << "AcountBalance: " << Client.AccountBalance << endl;

    return 0;
}