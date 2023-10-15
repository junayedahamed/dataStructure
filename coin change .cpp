#include <iostream>
#include <vector>
using namespace std;

vector<int> coinchange(vector<int> coin, int amount)
{
    int count = 0;
    vector<int> result;
    for (int i = 0; i < coin.size(); i++)
    {
        while (amount >= coin[i])
        {
            amount -= coin[i];
            result.push_back(coin[i]);
            count++;
        }
    }

    if (amount != 0)
    {
        cout << "Cannot make exact coin change" << endl;
    }
    cout << "Use of total coin: " << count << endl;

    return result;
}

int main()
{
    vector<int> coin{20, 10, 5, 2};
    int amount = 19752;
    vector<int> result = coinchange(coin, amount);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}