#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num = {1, 2, 1};
    vector<int> result;

    for (int i = 0; i < num.size(); i++)
    {
        for (int j = (i+1) % num.size(); 1; j = (j+1) % num.size())
        {
            if (j == i)
            {
                result.push_back(-1);
                break;
            }

            if (num[j] > num[i])
            {
                result.push_back(num[j]);
                break;
            }
        }
    }

    for (vector<int>::iterator it = result.begin(); it != result.end(); it++)
        cout << *it << " ";
    cout << endl;

    return 0;
}