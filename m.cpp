#include <iostream>
using namespace std;

void margesort(int arr[], int l, int mid, int h)
{
    int p = l;
    int x = 0;
    int i = mid + 1, k = l;

    int temp[h - l + 1];
    while (k <= mid && i <= h)
    {
        if (arr[k] <= arr[i])
        {
            temp[x++] = arr[k++];
        }
        else
        {
            temp[x++] = arr[i++];
        }
    }

    while (k <= mid)
    {
        temp[x++] = arr[k++];
    }
    while (i <= h)
    {
        temp[x++] = arr[i++];
    }

    for (int j = 0, p; j < h - l + 1; j++, p++)
    {
        arr[p] = temp[j];
    }
}

void marge(int arr[], int l, int h)
{
    int mid;
    if (l < h)
    {

        mid = (h + l) / 2;
        marge(arr, l, mid);
        marge(arr, mid + 1, h);
        margesort(arr, l, mid, h);
    }
}
int main()
{
    int arr[10] = {5, 7, 9, 8, 1, 4, 6, 3, 5, 11};
    marge(arr, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}