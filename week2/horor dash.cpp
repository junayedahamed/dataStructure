#include <iostream>
using namespace std;
int main()
{
    int test = 0, max = 0, n = 0, val = 0;

    cin >> test;
    for (int i = 1; i <= test; i++)
    {

        cin >> n;

        for (int j = 1; j <= n; j++)
        {
            cin >> val;

            if (max < val)
            {

                max = val;
            }
        }
        cout << "Case " << i << ": " << max << endl;
        max = 0;
    }
    return 0;
}