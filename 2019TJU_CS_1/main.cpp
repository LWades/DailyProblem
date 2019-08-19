#include <iostream>
using namespace std;

int main() {
    int n, m, input;
    int sum = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input < m)
            sum++;
    }

    cout << sum;

    return 0;
}
//非常简单 和答案完全一样