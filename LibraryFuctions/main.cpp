#include <iostream>

/*
 * 判断是否为素数
 */
bool isPrime(int n)
{
    if (n == 0 || n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {

    return 0;
}