
#include <iostream>
using namespace std;

int binary_search(int x, int ar[], int target)
{

    int low = 0, high = x - 1, mid = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (ar[mid] == target)
        {
            return mid;
        }
        if (ar[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
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

    y = binary_search(x, ar, target);
    if (y == -1)
    {
        cout << "Target Not Found" << endl;
    }
    else
    {
        cout << "Target index is: " << y << endl;
    }
}