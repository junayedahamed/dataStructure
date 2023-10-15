#include <iostream>
using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int temp = 0, i = l - 1;

    for (int j = l; j < h; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[h];
    arr[h] = arr[i + 1];
    arr[i + 1] = temp;
    return i + 1;
}

void quick_sort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = partition(arr, l, h);
        quick_sort(arr, l, p - 1);
        quick_sort(arr, p + 1, h);
    }
}

int main()
{
    int arr[7] = {1, 0, 8, 7, 5, 2, 6};
    quick_sort(arr, 0, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}