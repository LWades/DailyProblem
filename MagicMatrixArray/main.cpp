#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;

    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Input error!" << endl;
        return 1;
    }

    vector<vector<int>> magicMatrix(n+1);
    //初始化二维数组
    for (int i = 0; i < magicMatrix.size(); i++)
        magicMatrix[i].resize(n+1);

    //构建1的位置
    magicMatrix[0][n/2] = 1;

    int rBefore = 0;
    int cBefore = n/2;

    //根据规则构造魔方阵
    for (int i = 1; i < n * n; i++)
    {
        int r = (rBefore + 2) % n;
        int c = (cBefore + 1) % n;

        if (magicMatrix[r][c] != 0)
        {
            r = (rBefore + 1) % n;        //放下面
            c = cBefore;
        }

        magicMatrix[r][c] = i + 1;      //设置当前的魔方值

        //共下一个值使用
        rBefore = r;
        cBefore = c;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(2) << left << magicMatrix[i][j] << ' ';
        }

        cout << endl;
    }

    return 0;
}