#include <iostream>
#include <string>
using namespace std;

bool isLetter(char a)
{
    if (a >= 'a' && a <= 'z')
        return 1;
    else if (a >= 'A' && a <= 'Z')
        return 1;
    else
        return 0;
}

int main() {
    string input;
    int n = 0;

    getline(cin, input);

    if (input.size() == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else
        n++;

    for (int i = 2; i < input.size(); i++)
    {
        if (input[i-1] == ' ' && isLetter(input[i]))
            n++;
        if (input[i-1] != ' ' && !isLetter(input[i-1]))
            n++;
    }

    cout << n << endl;

    return 0;
}