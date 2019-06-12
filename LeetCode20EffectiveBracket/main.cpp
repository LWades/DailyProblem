#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> s;
    string input;
    char front[3] = {'(', '[', '{'};
    char behind[3] = {')', ']', '}'};

    do
    {
        cin >> input;
        bool effective = true;

        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] == '(' || input[i] == '[' || input[i] == '{')
                s.push(input[i]);
            else if (input[i] == ')')
            {
                if (s.empty() || s.top() != '(')
                {
                    effective = false;
                    cout << "false" << endl;
                    break;
                }
                else
                    s.pop();
            }
            else if (input[i] == ']')
            {
                if (s.empty() || s.top() != '[')
                {
                    effective = false;
                    cout << "false" << endl;
                    break;
                }
                else
                    s.pop();
            }
            else if (input[i] == '}')
            {
                if (s.empty() || s.top() != '{')
                {
                    effective = false;
                    cout << "false" << endl;
                    break;
                }
                else
                    s.pop();
            }
        }

        if (effective)
            cout << "true" << endl;
        if(!s.empty())                      //注意剩余未匹配的情况
            cout << "false" << endl;
    } while (input != "End");

    return 0;
}
//学习利用auto的方式遍历字符串
//答案的代码整体比较漂亮简洁 要学习