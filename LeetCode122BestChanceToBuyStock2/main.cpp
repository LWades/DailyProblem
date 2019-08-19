#include <iostream>
#include <vector>
using namespace std;

int MaxProfit(vector<int> input)
{
    int res = 0;
    int minNow = input[0];
    int profit = 0;

    cout << "Current res: " << res << endl;

    for (int i = 1; i < input.size(); i++)
    {
        if (input[i] - minNow > res)
        {
            res = input[i] - minNow;
            cout << i << ": Current res: " << res << endl;
        }
        else
        {
            profit += res;
            cout << i << ": Profit: " << profit << endl;
            minNow = input[i];
            res = 0;
            cout << i << ": MinNow change to " << minNow << endl;
        }

        if (i == input.size()-1)
        {
            profit += (input[i] - minNow > res ? input[i] - minNow : res);
            cout << i << ": Profit: " << profit << endl;
        }
    }

    return profit;
}

int maxProfit(vector<int> &prices)
{
    if (prices.empty())
        return 0;
    int buy1 = -prices[0], sell1 = 0, buy2 = -prices[0], sell2 = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        buy1 = max(buy1, -prices[i]);
        sell1 = max(sell1, buy1 + prices[i]);
        buy2 = max(buy2, sell1 - prices[i]);
        sell2 = max(sell2, buy2 + prices[i]);
    }
    return sell2;
}

int main() {
    vector<int> input1 = {7,1,5,3,6,4};
    vector<int> input2 = {1,2,3,4,5};
    vector<int> input3 = {7,6,4,3,1};

    cout << MaxProfit(input1) << endl << MaxProfit(input2) << endl << MaxProfit(input3) << endl;

    return 0;
}
//答案是转化问题的是算法，更优