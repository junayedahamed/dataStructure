#include <iostream>
using namespace std;

void conquer(int arr[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = 0;
    int temp[h - l + 1];
    while (i <= mid && j <= h)
    {

        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= h)
    {
        temp[k++] = arr[j++];
    }

    for (int a = 0, b = l; a < h - l + 1; a++, b++)
    {
        arr[b] = temp[a];
    }
}

void divide(int arr[], int l, int h)
{
    int mid;
    if (l >= h)
    {
        return;
    }
    mid = (h + l) / 2;
    divide(arr, l, mid);
    divide(arr, mid + 1, h);
    conquer(arr, l, mid, h);
}
int main()
{
    int arr[5] = {1, 9, 7, 8, 3};
    int l = 0, h = 4;

    divide(arr, l, h);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}
