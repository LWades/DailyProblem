#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, result;

    cin >> n;

    vector<int> a(n+1);

    a[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            a[i] += a[j];
        }
    }

    result = a[n] % 100000007;

    cout << result << endl;

    return 0;
}
//本解法是根据题意设计得出，答案直接将分析放在了纸上，利用数学方法解题，代码简洁，值得借鉴