#include <iostream>
using namespace std;

void marge(int arr[], int l, int mid, int h)
{
    int i = 0;
    int indx1 = l;
    int indx2 = mid + 1;
    int temp[h - l + 1];
    while (indx1 <= mid && indx2 <= h)
    {
        if (arr[indx1] <= arr[indx2])
        {
            temp[i++] = arr[indx1++];
        }
        else
        {
            temp[i++] = arr[indx2++];
        }
    }
    while (indx1 <= mid)
    {
        temp[i++] = arr[indx1++];
    }
    while (indx2 <= h)
    {
        temp[i++] = arr[indx2++];
    }

    for (int i = 0, j = l; i < h - l + 1; i++, j++)
    {
        arr[j] = temp[i];
    }
}

void marge_sort(int arr[], int l, int h)
{
    int mid;
    if (l >= h)
    {
        return;
    }

    mid = (l + h) / 2;
    marge_sort(arr, l, mid);
    marge_sort(arr, mid + 1, h);
    marge(arr, l, mid, h);
}

// conquer(arr, l, mid, h);

int main()
{
    int arr[] = {1, 7, 9, 5, 2, 3, 6, 5, 4, 10};
    int l = 0, h = 9;
    marge_sort(arr, l, h);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}