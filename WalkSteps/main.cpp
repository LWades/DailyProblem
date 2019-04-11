#include <iostream>
using namespace std;

/*
 * 走到第n阶时可能是第n-1阶走一步到的，也可能是从n-2阶走两步到的
 * 所以原理就是斐波那契数列数列
 */
int walkSteps(int n)
{
    if (n < 1 || n > 1000000)
        return -1;

    if (1 == n)
        return 1;
    else if (2 == n)
        return 2;
    else
        return walkSteps(n-1) + walkSteps(n-2);
}

int main() {
    int n, result;

    cin >> n;

    result = walkSteps(n) % 100000007;

    cout << result << endl;

    return 0;
}