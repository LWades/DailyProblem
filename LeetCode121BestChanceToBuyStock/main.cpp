#include <iostream>
#include <vector>
using namespace std;

int BestChanceToBuyStock(vector<int> v)
{
    int min = v[0];
    int maxSub = 0;

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < min)
            min = v[i];
        else
        {
            int sub = v[i] - min;

            if (sub > maxSub)
                maxSub = sub;
        }
    }

    return maxSub;
}

int main() {
    vector<int> v1 = {7, 1, 5, 3, 6, 4};
    vector<int> v2 = {7, 6, 4, 3, 1};

    cout << BestChanceToBuyStock(v1) << endl;
    cout << BestChanceToBuyStock(v2) << endl << "End" << endl;

    return 0;
}
//关键在于搞清问题本质