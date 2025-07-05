#include <iostream>

using namespace std;

char ReadCharacter()
{
    char character;
    cout << "Please enter a character? " << endl;
    cin >> character;
    return character;
}

char InvertedLetterCase(char char1)
{
    return isupper(char1) ? tolower(char1) : toupper(char1);
}

int main()
{
    char character = ReadCharacter();
    cout << "\nCharacter after Inverting case:\n";
    character = InvertedLetterCase(character);
    cout << character << endl;
    return 0;
}