#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
//    vector<string> input = {"5", "2", "C", "D", "+"};
    vector<string> input = {"5", "-2", "4", "C", "D", "9", "+", "+"};
    int sum = 0;
    int before1 = -1, before2 = -1;         //表示前1轮和前2轮的整数值 -1表示没有赋值
    vector<int> myStack(input.size());   //栈初始化
    int stackSize = 0;                      //栈大小
    int stackHead = -1;                     //栈顶
    int currentScore = 0;

    for (int i = 0; i < input.size(); i++)
    {
        cout << "Round " << i+1 << ": ";
        //数字
        if (atoi((input[i].c_str())) || input[i].compare("0") == 0)
//        if (input[i].compare("0") > 0 && input[i].compare("9") < 0)
        {
            currentScore = atoi(input[i].c_str());
            myStack[stackSize] = currentScore;
            stackHead = stackSize;
            stackSize++;
            before1 = myStack[stackHead];
            if (stackSize > 0)
                before2 = myStack[stackHead-1];
            else
                before2 = -1;

            sum += currentScore;

            cout << "You can get " << currentScore << " score ";
        }
        else if (input[i] == "D")
        {
            currentScore = 2 * before1;
            myStack[stackSize] = currentScore;
            stackHead = stackSize;
            stackSize++;
            before2 = before1;
            before1 = currentScore;

            sum += currentScore;

            cout << "double: you can get " << currentScore << " score ";
        }
        else if (input[i] == "C")
        {
            if (0 == stackSize)
            {
                cout << "Input error!(stack is empty)" << endl;
                return 0;
            }

            currentScore = myStack[stackHead];
            myStack[stackHead] = 0;
            stackHead--;
            stackSize--;

            before1 = myStack[stackHead];
            if (stackSize > 0)
                before2 = myStack[stackHead-1];
            else
                before2 = -1;

            sum -= currentScore;

            cout << "Round " << i << " is deleted ";
        }
        else if (input[i] == "+")
        {
            if (before1 == -1 || before2 == -1)
            {
                cout << "Error!(number is not enough)" << endl;
                return 0;
            }
            else
            {
                cout << "You can get " << before2 << " + " << before1;

                currentScore = before1 + before2;
                myStack[stackSize] = currentScore;
                stackHead = stackSize;
                stackSize++;
                before2 = before1;
                before1 = currentScore;
            }

            sum += currentScore;

            cout << " = " << currentScore << " score ";
        }

        cout << "sum: " << sum << endl;
    }

    cout << "Final sum = " << sum;

    return 0;
}
//反思：简洁度不够 主要体现在栈的使用和总和计算的思路上
//栈用stack好一点
//总和可以一起算 不用一步一步加 这样就避免了对于before1和before2的跟踪