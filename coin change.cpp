#include <iostream>
#include <vector>
using namespace std;

vector<int> coinchange(vector<int> arr, int amount)
{

    vector<int> result;
    int how_many_times = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        while (amount >= arr[i])
        {
            how_many_times++;
            amount -= arr[i];
            result.push_back(arr[i]);
        }
    }

    if (amount != 0)
    {
        cout << "Can't make exact coinn chage" << endl;
    }
    cout << "Change time: " << how_many_times << endl;

    return result;
}

int main()
{
    vector<int> coins{100, 50, 20, 10, 5, 2, 1};
    int amount = 12131, h_100 = 0, F_50 = 0, t_20 = 0, fi_5 = 0, tw_2 = 0, On_1 = 0, tn_10 = 0;
    vector<int> result = coinchange(coins, amount);
    for (int i = 0; i < result.size(); i++)
    {

        if (result[i] == 100)
        {
            h_100++;
        }
        else if (result[i] == 50)
        {
            F_50++;
        }
        else if (result[i] == 20)
        {
            t_20++;
        }
        else if (result[i] == 10)
        {
            tn_10++;
        }
        else if (result[i] == 5)
        {
            fi_5++;
        }
        else if (result[i] == 2)
        {
            tw_2++;
        }
        else
        {
            On_1++;
        }
    }

    cout << "100 tk note used:" << h_100 << " times" << endl;
    cout << "50 tk note used:" << F_50 << " times" << endl;
    cout << "20 tk note used:" << t_20 << " times" << endl;
    cout << "10 tk note used:" << tn_10 << " times" << endl;
    cout << "5 tk note used:" << fi_5 << " times" << endl;
    cout << "2 tk note used:" << tw_2 << " times" << endl;
    cout << "1 tk note used:" << On_1 << " times" << endl;
}