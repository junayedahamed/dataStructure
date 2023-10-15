#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int game, a, b, count = 0;
    vector<int> kit_a;
    vector<int> kit_b;

    cin >> game;
    for (int i = 1; i <= game; i++)
    {
        cin >> a >> b;

        kit_a.push_back(a);
        kit_b.push_back(b);

        for (int i = 0; i < kit_a.size(); i++)
        {
            if (kit_a[i] == b)
            {
                count++;
            }
            if (kit_b[i] == a)
            {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}