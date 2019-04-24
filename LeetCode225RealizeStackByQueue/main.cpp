#include <iostream>
#include <queue>
using namespace std;

class MyStack
{
public:
    void push(int a)
    {
        q1.push(a);
    }

    int top()
    {
        queue<int> tempQueue;

        if (q1.empty())
        {
            cout << "Stack is empty. " << endl;
            return EOF;
        }

        while (q1.size() > 1)
        {
            tempQueue.push(q1.front());
            q1.pop();
        }

        int r = q1.front();
        tempQueue.push(q1.front());

        while (!tempQueue.empty())
        {
            q1.push(tempQueue.front());
            tempQueue.pop();
        }

        return r;
    }

    int pop()
    {
        queue<int> tempQueue;

        if (q1.empty())
        {
            cout << "Stack is empty. " << endl;
            return EOF;
        }

        while (q1.size() > 1)
        {
            tempQueue.push(q1.front());
            q1.pop();
        }

        int r = q1.front();

        while (!tempQueue.empty())
        {
            q1.push(tempQueue.front());
            tempQueue.pop();
        }

        return r;
    }

    bool empty()
    {
        return q1.empty();
    }

private:
    queue<int> q1;
};

int main() {
    MyStack* obj = new MyStack();

    obj->push(1);
    obj->push(2);
    obj->push(3);

    cout << obj->top() << endl;
    cout << obj->pop() << endl;
    cout << obj->top() << endl;
    cout << obj->empty() << endl;

    return 0;
}