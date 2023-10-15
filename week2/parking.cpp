#include <iostream>

#include <algorithm>
using namespace std;
int main()
{
    int test = 0, n = 0, val = 0;

    cin >> test;
    for (int i = 1; i <= test; i++)
    {

        cin >> n;
        int arr[n];

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        for (int k = 0; k < n; k++)
        {
            for (int l = k + 1; l < n; l++)
            {
                if (arr[k] < arr[l])
                {
                    swap(arr[k], arr[l]);
                }
            }
        }

                cout << (arr[0] - arr[n - 1]) * 2 << endl;
    }
    return 0;
}