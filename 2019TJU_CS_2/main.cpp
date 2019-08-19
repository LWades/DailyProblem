#include <iostream>
#include <vector>
using namespace std;

int main() {
    int input, d, r, result = 0, base = 1;

    cin >> input;

    do {
        r = input % 8;
        input = input / 8;

        result = result + base * r;
        base *= 10;

    } while (0 != input);

    cout << result;

    return 0;
}
//学习答案正向存储反向输出的方法