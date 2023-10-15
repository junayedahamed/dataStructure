#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string s;
    int temp;
    cin >> s;
    vector<char> ans;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            continue;
        }
        else
        {
            ans.push_back(s[i]);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = i + 1; j < ans.size(); j++)
        {
            if (ans[i] > ans[j])
            {
                temp = ans[i];
                ans[i] = ans[j];
                ans[j] = temp;
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
        if (i == ans.size() - 1)
        {
            break;
        }
        cout << "+"
             << " ";
    }
    return 0;
}