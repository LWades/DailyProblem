#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

bool compare (pair<string, int> &a, pair<string, int> &b)
{
    return a.second != b.second ? a.second > b.second : a.first.compare(b.first) == 0;
}

bool compareType3(pair<string, int> &a, pair<string, int> &b)
{
    return a.second != b.second ? a.second > b.second : a.first.compare(b.first) == 0;
}

int main() {
    int n, m;       //n 考场人数 m 统计要求的个数

    cin >> n >> m;

//    map<char[13], int> input;
//    用char[]是错误的，插入map有误
    map<string, int> input;

    for (int i = 0; i < n; i++)
    {
        string inputAt;
        int inputScore;
        cin >> inputAt;
        cin >> inputScore;

//        input.insert(pair<string, int>(inputAt, inputScore));
//        这样插入也可以
        input[inputAt] = inputScore;
    }

    for (int i = 0; i < m; i++)
    {
        int type;
        cin >> type;

        switch (type)
        {
            case 1: {
                char level;
                cin >> level;
                cout << "Case " << i+1 << ": " << type << ' ' << level << endl;

                map<string, int> seletedStudent;
                map <string, int>::iterator it;

                for (it = input.begin(); it != input.end(); it++)
                {
                    if (it->first[0] == level)
                        seletedStudent[it->first] = it->second;
                }

                if (seletedStudent.empty())
                {
                    cout << "NA" << endl;
                    break;
                }

                vector<pair<string, int>> vectorSeleted;
                for (map<string, int>::iterator it2 = seletedStudent.begin(); it2 != seletedStudent.end(); it2++)
                    vectorSeleted.push_back(pair<string, int>(it2->first, it2->second));
                //排序
                sort(vectorSeleted.begin(), vectorSeleted.end(), compare);

                for (vector<pair<string, int>>::iterator it3 = vectorSeleted.begin(); it3 != vectorSeleted.end(); it3++)
                   cout << it3->first << ' ' << it3->second << endl;
                break;
            }
            case 2:
            {
                int sum = 0, num = 0;
                char examClass[3];
                cin >> examClass;
                cout << "Case " << i+1 << ": "  << type << ' ' << examClass << endl;

                for (map<string, int>::iterator it = input.begin(); it != input.end(); it++)
                {
                    int i, j;

                    for (i = 0, j = 1; i < 3 && j < 4; i++, j++)
                    {
                        if (examClass[i] != it->first[j])
                            break;
                    }

                    if (i == 3)         //相等
                    {
                        num++;
                        sum += it->second;
                    }
                }

                if (0 == num)
                {
                    cout << "NA" << endl;
                    break;
                }

                cout << num << ' ' << sum << endl;

                break;
            }
            case 3:
            {
                char date[6];
                cin >> date;

                cout << "Case " << i+1 << ": " << type << ' ' << date << endl;

                map<string, int> result;

                for (map<string, int>::iterator it = input.begin(); it != input.end(); it++)
                {
                    int i, j;
                    for (i = 0, j = 4; i < 6 && j < 10; i++, j++)
                    {
                        if (date[i] != it->first[j])
                            break;
                    }

                    if (0 == i)
                    {
                        cout << "NA" << endl;
                        break;
                    }

                    if (6 == i)     //相等
                    {
                        char examClass[4];
                        examClass[0] = it->first[1];
                        examClass[1] = it->first[2];
                        examClass[2] = it->first[3];
                        string examClassString(examClass);

                        if (result.find(examClassString) != result.end())
                            result[examClassString]++;
                        else
                            result[examClassString] = 1;
                    }
                }

                //准备排序
                vector<pair<string, int>> classVector;

                for (map<string, int>::iterator it2 = result.begin(); it2 != result.end(); it2++)
                    classVector.push_back(pair<string, int>(it2->first, it2->second));

                sort(classVector.begin(), classVector.end(), compareType3);

                for (vector<pair<string, int>>::iterator it3 = classVector.begin(); it3 != classVector.end(); it3++)
                    cout << it3->first << ' ' << it3->second << endl;

                break;
            }
            default:
                cout << "Input error";
                return 1;
                break;
        }
    }

    return 0;
}