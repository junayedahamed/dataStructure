#include <iostream>
using namespace std;

int linear_search(int x, int ar[], int target)
{

    for (int i = 0; i < x; i++)
    {
        if (ar[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int x, target, y;
    cout << "Enter  number of element: ";
    cin >> x;
    int ar[x];

    for (int i = 0; i < x; i++)
    {
        cin >> ar[i];
    }

    cout << "Enter target value: ";
    cin >> target;

    y = linear_search(x, ar, target);
    if (y == -1)
    {
        cout << "Target Not Found" << endl;
    }
    else
    {
        cout << "Target index is: " << y << endl;
    }
}