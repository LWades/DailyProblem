#include <iostream>
#include <stack>
using namespace std;

class MyQueue
{
public:
//    MyQueue()
//    {
//        stack<int> s1;
//        stack<int> s2;
//    }

    void push(int a)
    {
        s1.push(a);
    }

    int pop()
    {
        int r = peek();
        s2.pop();

        return r;
    }

    int peek()
    {
        if (empty())
            cout << "MyQueue is empty, can not pop. " << endl;
        else
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int r = s2.top();

        return r;
    }

    bool empty()
    {
        return s1.empty() && s2.empty();
    }


private:
    stack<int> s1;
    stack<int> s2;
};

int main() {
    MyQueue q;

    q.push(1);
    q.push(2);
    cout << q.peek() << endl;
    cout << q.pop() << endl;
    cout << q.empty() << endl;

    return 0;
}
//答案不如这个，答案每次都要创建新的temp栈来进行pop和peek，效率低下