#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

bool isPrimeNumber(int x);

int main() {
    int l, k;
    int m = 0;

    cin >> l >> k;

    if (k > l)
    {
        cout << "404";
        return 0;
    }

    vector<char> n(l);

    for (int i = 0; i < l; i++)
        cin >> n[i];

    for (int i = 0; i < k; i++)
    {
        m = m * 10 + (n[i] - '0');
    }

    for (int i = k; i < l-k; i++)
    {
        if (isPrimeNumber(m))
        {
            cout << m << endl;
            return 0;
        }
        else
        {
            m = m % (int)(pow(10, k-1));
            m = m * 10 + (n[i] - '0');
        }
    }

    if (isPrimeNumber(m))
        cout << m << endl;
    else
        cout << "404";

    return 0;
}

bool isPrimeNumber(int x)
{
    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
            return false;
    }

    return true;
}