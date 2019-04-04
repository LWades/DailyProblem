#include <iostream>
#include <string>
using namespace std;

bool hasOrNot(char s[], int n, char c);

int main() {
    string A;
    string B;
    char set[100];
    int n = 0;

    getline(cin, A);
    getline(cin, B);

    for (int i = 0; A[i] != '\0'; i++)
    {
        if (!hasOrNot(set, n, A[i]))
        {
            set[n] = A[i];
            n++;
        }
    }

    for (int i = 0; B[i] != '\0'; i++)
    {
        if (!hasOrNot(set, n, B[i]))
        {
            set[n] = B[i];
            n++;
        }
    }

    cout << set << endl;

    return 0;
}

bool hasOrNot(char s[], int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        if (c == s[i])
            return true;
    }

    return false;
}