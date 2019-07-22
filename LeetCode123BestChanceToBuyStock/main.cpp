#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> input)
{
    int firstMax = 0;
    int secondMax = 0;
    int minNow = input[0];
    int res = 0;
    int profit = 0;

    for (int i = 1; i < input.size(); i++)
    {
        if (input[i] - minNow > res)
            res = input[i] - minNow;
        else
        {
            if (res > firstMax)
            {
                profit += (res - secondMax);
                secondMax = firstMax;
                firstMax = res;
                res = 0;
                minNow = input[i];
            }
            else if (res > secondMax)
            {
                secondMax = res;
                profit += (res - secondMax);
                res = 0;
                minNow = input[i];
            }
        }

        if (i == input.size()-1 && res > secondMax)
        {
            profit += (res - secondMax);
        }
    }

    return profit;
}

int main() {
    vector<int> input1 = {3,3,5,0,0,3,1,4};
    vector<int> input2 = {1,2,3,4,5};
    vector<int> input3 = {7,6,4,3,1};

    cout << "Result1: " << maxProfit(input1) << endl;
    cout << "Result2: " << maxProfit(input2) << endl;
    cout << "Result3: " << maxProfit(input3) << endl;

    return 0;
}