#include <iostream>
#include <vector>
using namespace std;

void nextBiggerElement(vector<int> num1, vector<int> num2)
{
    vector<int> result;

    for (int i = 0; i < num1.size(); i++)
    {
        for (int j = 0; j < num2.size(); j++)
        {
            if (num1[i] == num2[j])
            {
                int k;
                for (k = j+1; k < num2.size(); k++)
                {
                    if (num2[k] > num1[i])
                    {
                        result.push_back(num2[k]);
                        break;
                    }
                }

                if (k >= num2.size())
                    result.push_back(-1);
            }
        }
    }

    for (int i = 0; i < num1.size(); i++)
        cout << result[i] << " ";

    cout << endl;
}

int main() {
    vector<int> num1 = {4, 1, 2};
    vector<int> num2 = {1, 3, 4, 2};
    vector<int> num3 = {2, 4};
    vector<int> num4 = {1, 2, 3, 4};

    nextBiggerElement(num1, num2);
    nextBiggerElement(num3, num4);

    return 0;
}
//注意答案中注意find()和auto的使用