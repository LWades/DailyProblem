#include <iostream>
#include <vector>
using namespace std;

/*
 * 是否为非降序 非降序返回true 降序返回false
 */
bool isNotDescend(vector<string> v)
{
    for (int i = 0; i < v.size()-1; i++)
    {
        if (v[i] > v[i+1])
            return false;
    }
    return true;
}

int DeleteColumnMakeOrder(vector<string> v)
{
    int stringLength = v[0].length();
    int num = 0;

    for (int i = 0; i < stringLength; i++)
    {
        vector<string> order;

        for (int j = 0; j < v.size(); j++)
        {
            string s;
            s.push_back(v[j][i]);
            order.push_back(s);
        }

        if (!isNotDescend(order))
            num++;
    }

    return num;
}

int main() {
//    vector<string> input = {"cba", "daf", "ghi"};
//    vector<string> input = {"a", "b"};
    vector<string> input = {"zyx", "wvu", "tsr"};

    cout << DeleteColumnMakeOrder(input) << endl;

    return 0;
}
//首先不能死脑筋 要灵活清楚地认识题目的结果是什么意思
//答案非常简洁 值得学习 其实不用isNotDescend函数了 用了反而麻烦
//思路还是对的