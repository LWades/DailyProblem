#include <iostream>
#include <stack>
using namespace std;

class MinStack
{
public:
    void push(int x)
    {
        if (s.empty() || min > x)
        {
            min = x;
        }

        s.push(x);
    }

    void pop()
    {
        if (s.top() == min)
        {
            s.pop();                //先弹出一个
            stack<int> temp;
            int minNew = s.top();

            while(!s.empty())
            {
                int x = s.top();
                if (x < minNew)
                    minNew = x;

                temp.push(s.top());
                s.pop();
            }

            min = minNew;

            while (!temp.empty())
            {
                s.push(temp.top());
                temp.pop();
            }
        }
        else
            s.pop();
    }

    int top()
    {
        return s.top();
    }

    int getMin()
    {
        return min;
    }
private:
    stack<int> s;
    int min;
};

int main() {
    MinStack *minStack = new MinStack();

    minStack->push(-2);
    minStack->push(0);
    minStack->push(-3);

    cout << minStack->getMin() << endl;

    minStack->pop();

    cout << minStack->top() << endl;

    cout << minStack->getMin() << endl;

    return 0;
}
//注意异常处理