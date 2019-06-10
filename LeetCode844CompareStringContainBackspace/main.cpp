#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string s, t;

    cin >> s;
    cin >> t;

    stack<char> st1;
    stack<char> st2;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '#')
            st1.push(s[i]);
        else
        {
            if (!st1.empty())
                st1.pop();
        }
    }

    for (int i = 0; i < t.length(); i++)
    {
        if (t[i] != '#')
            st2.push(t[i]);
        else
        {
            if (!st2.empty())
                st2.pop();
        }
    }

//    if (st1 == st2)
//        cout << true << endl;
//    else
//        cout << false << endl;

    if (st1.size() != st2.size())
        cout << "false" << endl;
    else
    {
        while (!st1.empty())
        {
            if (st1.top() != st2.top())
            {
                cout << "false" << endl;
                return 0;
            }

            st1.pop();
            st2.pop();
        }

        cout << "true" << endl;
    }

    return 0;
}
//c++两个stack可用==直接比较是否相等