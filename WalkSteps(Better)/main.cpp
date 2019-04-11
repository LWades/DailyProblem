#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, result;

    cin >> n;

    vector<int> a(n+1);       //保留计算的中间结果，提升效率

    //斐波那契数列的迭代版本
    for (int i = 1; i <= n; i++)
    {
        if (1 == i)
            a[i] = 1;
        else if (2 == i)
            a[i] = 2;
        else
            a[i] = a[i-1] + a[i-2];
    }

    result = a[n] % 100000007;

    cout << result << endl;

    return 0;
}
//并不是最好，存的数多了，其实每次循环就存上一次循环的两个数就行了，见官方答案